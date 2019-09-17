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

	// SDL_sound Sound_DecoderInfo
	//
	struct DecoderInfo {
		const char **extensions; // File extensions, list ends with NULL.
		const char *description; // Human readable description of decoder.
		const char *author;      // "Name Of Author <email@emailhost.dom>"
		const char *url;         // URL specific to this decoder.
	};

	// function pointer types:
	//
	using sdl_sound_init_t = int (*)();
	using sdl_sound_quit_t = int (*)();
	using sdl_sound_available_decoders_t = const DecoderInfo ** (*)();

	// SDL_sound function pointers:
	//
	sdl_sound_init_t sdl_sound_init = nullptr;
	sdl_sound_quit_t sdl_sound_quit = nullptr;
	sdl_sound_available_decoders_t sdl_sound_available_decoders = nullptr;

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

int sound::Quit() {
	if (!sdl_sound_quit) {
		fprintf(stderr, "SDL_sound: Sound_Quit symbol missing\n");
		return 0;
	}
	return sdl_sound_quit();
}
