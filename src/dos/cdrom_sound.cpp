/*
 *  Copyright (C) 2002-2019  The DOSBox Team
 *  Copyright (C) 2019-2019  Patryk Obara
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "cdrom_sound.h"

#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>

namespace {

	// function pointer types:
	//
	using sdl_sound_init_t = int (*)();
	using sdl_sound_quit_t = int (*)();
	using sdl_sound_available_decoders_t = const sound::DecoderInfo ** (*)();
	using sdl_sound_new_sample_from_file_t = sound::Sample * (*)(const char *, sound::AudioInfo *, uint32_t);
	using sdl_sound_free_sample_t = void (*)(sound::Sample *);
	using sdl_sound_seek_t = int (*)(sound::Sample *, uint32_t);
	using sdl_sound_set_buffer_size_t = int (*)(sound::Sample *, uint32_t);
	using sdl_sound_decode_t = uint32_t (*)(sound::Sample *);

	// SDL_sound function pointers:
	//
	sdl_sound_init_t sdl_sound_init = nullptr;
	sdl_sound_quit_t sdl_sound_quit = nullptr;
	sdl_sound_available_decoders_t sdl_sound_available_decoders = nullptr;
	sdl_sound_new_sample_from_file_t sdl_sound_new_sample_from_file = nullptr;
	sdl_sound_free_sample_t sdl_sound_free_sample = nullptr;
	sdl_sound_seek_t sdl_sound_seek = nullptr;
	sdl_sound_set_buffer_size_t sdl_sound_set_buffer_size = nullptr;
	sdl_sound_decode_t sdl_sound_decode = nullptr;

	// template functions:
	//
	template <typename F>
	bool load_symbol(void *lib, const char *name, F &fptr) {
		fptr = (F)dlsym(lib, name);
		const char *err = nullptr;
		if ((err = dlerror()) != nullptr) {
			fprintf(stderr, "dlerror: %s\n", err);
			return false;
		}
		return true;
	}

} // anonymous namespace

int sound::Init() {
	void *sdl_sound = dlopen("libSDL_sound-1.0.so.1", RTLD_LAZY);
	if (!sdl_sound) {
		fprintf(stderr, "Couldn't load SDL_sound library.\n");
		return 0;
	}
	if (!load_symbol(sdl_sound, "Sound_Init", sdl_sound_init))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_Quit", sdl_sound_quit))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_AvailableDecoders", sdl_sound_available_decoders))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_NewSampleFromFile", sdl_sound_new_sample_from_file))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_FreeSample", sdl_sound_free_sample))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_Seek", sdl_sound_seek))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_SetBufferSize", sdl_sound_set_buffer_size))
		return 0;
	if (!load_symbol(sdl_sound, "Sound_Decode", sdl_sound_decode))
		return 0;
	return sdl_sound_init();
}

bool sound::SupportsType(const std::string &type) {
	if (!sdl_sound_available_decoders) {
		fprintf(stderr, "SDL_sound: Sound_AvailableDecoders symbol missing\n");
		return false;
	}
	for (const auto **i = sdl_sound_available_decoders(); *i != nullptr; ++i)
		for (const char **ext = (*i)->extensions; *ext != nullptr; ++ext)
			if (type == *ext)
				return true;
	return false;
}

sound::Sample * sound::NewSampleFromFile(const char *fname, uint32_t buffer_size) {
	if (!sdl_sound_new_sample_from_file) {
		fprintf(stderr, "SDL_sound: Sound_NewSampleFromFile symbol missing\n");
		return nullptr;
	}
	// value of AUDIO_S16 copied from SDL_audio 1.x:
	constexpr uint16_t AUDIO_S16 = 0x8010; // signed 16-bit samples
	sound::AudioInfo desired = {AUDIO_S16, 2, 44100};
	return sdl_sound_new_sample_from_file(fname, &desired, buffer_size);
}

void sound::FreeSample(sound::Sample *sample) {
	if (!sdl_sound_free_sample) {
		fprintf(stderr, "SDL_sound: Sound_FreeSample symbol missing\n");
		return;
	}
	sdl_sound_free_sample(sample);
}

int sound::Seek(sound::Sample *sample, uint32_t ms) {
	if (!sdl_sound_seek) {
		fprintf(stderr, "SDL_sound: Sound_Seek symbol missing\n");
		return 0;
	}
	return sdl_sound_seek(sample, ms);
}

int sound::Quit() {
	if (!sdl_sound_quit) {
		fprintf(stderr, "SDL_sound: Sound_Quit symbol missing\n");
		return 0;
	}
	return sdl_sound_quit();
}

int sound::SetBufferSize(sound::Sample *sample, uint32_t new_size) {
	if (!sdl_sound_set_buffer_size) {
		fprintf(stderr, "SDL_sound: Sound_SetBufferSize symbol missing\n");
		return 0;
	}
	return sdl_sound_set_buffer_size(sample, new_size);
}

uint32_t sound::Decode(sound::Sample *sample) {
	if (!sdl_sound_decode) {
		fprintf(stderr, "SDL_sound: Sound_Decode symbol missing\n");
		return 0;
	}
	return sdl_sound_decode(sample);
}
