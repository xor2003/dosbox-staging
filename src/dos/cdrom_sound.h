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


#ifndef DOSBOX_CDROM_SOUND_H
#define DOSBOX_CDROM_SOUND_H

#include <string>

namespace sound {

/* Dynamically load SDL_sound library, and initialize it.
 *
 * See SDL_sound documentation for Sound_Init.
 *
 * Returns nonzero on success, zero on error (to be consistent with Sound_Init.
 */
int Init();

/* Return true iff type (extension) is supported by one of SDL_sound decoders.
 */
bool SupportsType(const std::string &type);

/* Shutdown SDL_sound.
 *
 * See SDL_sound documentation for Sound_Quit.
 *
 * Returns nonzero on success, zero on error (to be consistent with Sound_Quit.
 */
int Quit();

}; // namespace sound

#endif
