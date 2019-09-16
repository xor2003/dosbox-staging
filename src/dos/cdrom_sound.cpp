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


// function pointer types:
//
typedef int (*sdl_sound_init_t)();
typedef int (*sdl_sound_quit_t)();

namespace {

	sdl_sound_init_t sdl_sound_init = nullptr;
	sdl_sound_quit_t sdl_sound_quit = nullptr;

} // anonymous namespace

int sound::Init() {
	char *err = nullptr;
	void *sdl_sound_handle = nullptr;

	sdl_sound_handle = dlopen("libSDL_sound-1.0.so.1", RTLD_LAZY);
	if (!sdl_sound_handle) {
		fprintf(stderr, "Couldn't load SDL_sound library.\n");
		return 0;
	}

	sdl_sound_init = (sdl_sound_init_t)dlsym(sdl_sound_handle, "Sound_Init");
	if ((err = dlerror()) != nullptr) {
		fprintf(stderr, "dlerror: %s\n", err);
		return 0;
	}

	sdl_sound_quit = (sdl_sound_quit_t)dlsym(sdl_sound_handle, "Sound_Quit");
	if ((err = dlerror()) != nullptr) {
		fprintf(stderr, "dlerror: %s\n", err);
		return 0;
	}

	return sdl_sound_init();
}

int sound::Quit() {
	if (!sdl_sound_quit) {
		fprintf(stderr, "SDL_sound: Sound_Quit symbol missing\n");
		return 0;
	}
	return sdl_sound_quit();
}
