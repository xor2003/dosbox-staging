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

enum SampleFlags {
	SOUND_SAMPLEFLAG_NONE    = 0,       // No special attributes.
	SOUND_SAMPLEFLAG_CANSEEK = 1,       // Sample can seek to arbitrary points.
	SOUND_SAMPLEFLAG_EOF     = 1 << 29, // End of input stream.
	SOUND_SAMPLEFLAG_ERROR   = 1 << 30, // Unrecoverable error.
	SOUND_SAMPLEFLAG_EAGAIN  = 1 << 31  // Function would block, or temp error.
};

// SDL_sound Sound_DecoderInfo
//
struct DecoderInfo {
	const char **extensions; // File extensions, list ends with NULL.
	const char *description; // Human readable description of decoder.
	const char *author;      // "Name Of Author <email@emailhost.dom>"
	const char *url;         // URL specific to this decoder.
};

// SDL_sound Sound_AudioInfo
//
struct AudioInfo {
	uint16_t format;  // Equivalent of SDL_AudioSpec.format.
	uint8_t channels; // Number of sound channels. 1 == mono, 2 == stereo.
	uint32_t rate;    // Sample rate; frequency of sample points per second.
};

// SDL_sound Sound_Sample
//
struct Sample {
	void *opaque;                // Internal use only. Don't touch.
	const DecoderInfo *decoder;  // Decoder used for this sample.
	AudioInfo desired;           // Desired audio format for conversion.
	AudioInfo actual;            // Actual audio format of sample.
	void *buffer;                // Decoded sound data lands in here.
	uint32_t buffer_size;        // Current size of (buffer), in bytes (Uint8).
	SampleFlags flags;           // Flags relating to this sample.
};

/* Dynamically load SDL_sound library, and initialize it.
 *
 * See SDL_sound documentation for Sound_Init.
 *
 * Returns nonzero on success, zero on error (to be consistent with Sound_Init).
 */
int Init();

/* Return true iff type (extension) is supported by one of SDL_sound decoders.
 */
bool SupportsType(const std::string &type);

/* Shutdown SDL_sound.
 *
 * See SDL_sound documentation for Sound_Quit.
 *
 * Returns nonzero on success, zero on error (to be consistent with Sound_Quit).
 */
int Quit();

/* Start decoding a new sound sample from a file on disk.
 *
 * See SDL_sound documentation for Sound_NewSampleFromFile.
 */
Sample * NewSampleFromFile(const char *fname, uint32_t buffer_size);

}; // namespace sound

#endif
