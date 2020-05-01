 /*
 *  Copyright (C) 2002-2011  The DOSBox Team
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
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#ifndef DOSBOX_VOODOO_VOGL_H
#define DOSBOX_VOODOO_VOGL_H

#include "SDL.h"
#include "SDL_opengl.h"


/* opengl extensions */
extern PFNGLACTIVETEXTUREARBPROC glActiveTextureARB_ptr;
extern PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB_ptr;
extern PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB_ptr;
extern PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB_ptr;
extern PFNGLSHADERSOURCEARBPROC glShaderSourceARB_ptr;
extern PFNGLCOMPILESHADERARBPROC glCompileShaderARB_ptr;
extern PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB_ptr;
extern PFNGLATTACHOBJECTARBPROC glAttachObjectARB_ptr;
extern PFNGLLINKPROGRAMARBPROC glLinkProgramARB_ptr;
extern PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB_ptr;
extern PFNGLDELETEPROGRAMPROC glDeleteProgram_ptr;
extern PFNGLUNIFORM1IARBPROC glUniform1iARB_ptr;
extern PFNGLUNIFORM1FARBPROC glUniform1fARB_ptr;
extern PFNGLUNIFORM2FARBPROC glUniform2fARB_ptr;
extern PFNGLUNIFORM3FARBPROC glUniform3fARB_ptr;
extern PFNGLUNIFORM4FARBPROC glUniform4fARB_ptr;
extern PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB_ptr;
extern PFNGLDETACHOBJECTARBPROC glDetachObjectARB_ptr;
extern PFNGLDELETEOBJECTARBPROC glDeleteObjectARB_ptr;
extern PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB_ptr;
extern PFNGLGETINFOLOGARBPROC glGetInfoLogARB_ptr;
extern PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate_ptr;
extern PFNGLGENERATEMIPMAPEXTPROC glGenerateMipmap_ptr;
extern PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB_ptr;
extern PFNGLVERTEXATTRIB1FPROC glVertexAttrib1fARB_ptr;


#define VOGL_ATLEAST_V20			0x00000001
#define VOGL_ATLEAST_V21			0x00000002
#define VOGL_ATLEAST_V30			0x00000004
#define VOGL_HAS_SHADERS			0x00000010
#define VOGL_HAS_STENCIL_BUFFER		0x00000100
#define VOGL_HAS_ALPHA_PLANE		0x00000200


static const GLuint ogl_sfactor[16] = {
	GL_ZERO,
	GL_SRC_ALPHA,
	GL_DST_COLOR,
	GL_DST_ALPHA,
	GL_ONE,
	GL_ONE_MINUS_SRC_ALPHA,
	GL_ONE_MINUS_DST_COLOR,
	GL_ONE_MINUS_DST_ALPHA,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_SRC_ALPHA_SATURATE
};

static const GLuint ogl_dfactor[16] = {
	GL_ZERO,
	GL_SRC_ALPHA,
	GL_SRC_COLOR,
	GL_DST_ALPHA,
	GL_ONE,
	GL_ONE_MINUS_SRC_ALPHA,
	GL_ONE_MINUS_SRC_COLOR,
	GL_ONE_MINUS_DST_ALPHA,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_ZERO,
	GL_SRC_COLOR /* A_COLORBEFOREFOG */
};


void VOGL_Reset(void);

bool VOGL_Initialize(void);

bool VOGL_CheckFeature(Bit32u feat);
void VOGL_FlagFeature(Bit32u feat);

void VOGL_BeginMode(INT32 new_mode);
void VOGL_ClearBeginMode(void);

void VOGL_SetDepthMode(Bit32s mode, Bit32s func);
void VOGL_SetAlphaMode(Bit32s enabled_mode,GLuint src_rgb_fac,GLuint dst_rgb_fac,
											GLuint src_alpha_fac,GLuint dst_alpha_fac);

void VOGL_SetDepthMaskMode(bool masked);
void VOGL_SetColorMaskMode(bool cmasked, bool amasked);

void VOGL_SetDrawMode(bool front_draw);
void VOGL_SetReadMode(bool front_read);

#endif