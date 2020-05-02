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


#include <stdlib.h>
#include <math.h>
#include <map>

#include "dosbox.h"

#if C_OPENGL

#include "voodoo_vogl.h"


PFNGLACTIVETEXTUREARBPROC glActiveTextureARB_ptr = NULL;
PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB_ptr = NULL;
PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB_ptr = NULL;
PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB_ptr = NULL;
PFNGLSHADERSOURCEARBPROC glShaderSourceARB_ptr = NULL;
PFNGLCOMPILESHADERARBPROC glCompileShaderARB_ptr = NULL;
PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB_ptr = NULL;
PFNGLATTACHOBJECTARBPROC glAttachObjectARB_ptr = NULL;
PFNGLLINKPROGRAMARBPROC glLinkProgramARB_ptr = NULL;
PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB_ptr = NULL;
PFNGLDELETEPROGRAMPROC glDeleteProgram_ptr = NULL;
PFNGLUNIFORM1IARBPROC glUniform1iARB_ptr = NULL;
PFNGLUNIFORM1FARBPROC glUniform1fARB_ptr = NULL;
PFNGLUNIFORM2FARBPROC glUniform2fARB_ptr = NULL;
PFNGLUNIFORM3FARBPROC glUniform3fARB_ptr = NULL;
PFNGLUNIFORM4FARBPROC glUniform4fARB_ptr = NULL;
PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB_ptr = NULL;
PFNGLDETACHOBJECTARBPROC glDetachObjectARB_ptr = NULL;
PFNGLDELETEOBJECTARBPROC glDeleteObjectARB_ptr = NULL;
PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB_ptr = NULL;
PFNGLGETINFOLOGARBPROC glGetInfoLogARB_ptr = NULL;
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate_ptr = NULL;
PFNGLGENERATEMIPMAPEXTPROC glGenerateMipmap_ptr = NULL;
PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB_ptr = NULL;
PFNGLVERTEXATTRIB1FPROC glVertexAttrib1fARB_ptr = NULL;


static Bit32s opengl_version = -1;

static bool has_shaders = false;
static bool has_stencil = false;
static bool has_alpha = false;


static int32_t current_begin_mode = -1;

static Bit32s current_depth_mode = -1;
static Bit32s current_depth_func = -1;

static Bit32s current_alpha_enabled = -1;
static Bit32s current_src_rgb_fac = -1;
static Bit32s current_dst_rgb_fac = -1;
static Bit32s current_src_alpha_fac = -1;
static Bit32s current_dst_alpha_fac = -1;

static bool depth_masked = false;
static bool color_masked = false;
static bool alpha_masked = false;

// buffer read/write defaults are back-buffer for double buffered contexts
static bool draw_to_front_buffer = false;
static bool read_from_front_buffer = false;


void VOGL_Reset(void) {
	opengl_version = -1;
	has_shaders = false;
	has_stencil = false;
	has_alpha = false;

	current_depth_mode=-1;
	current_depth_func=-1;

	current_alpha_enabled=-1;
	current_src_rgb_fac=-1;
	current_dst_rgb_fac=-1;
	current_src_alpha_fac=-1;
	current_dst_alpha_fac=-1;

	depth_masked = false;
	color_masked = false;
	alpha_masked = false;

	draw_to_front_buffer = false;
	read_from_front_buffer = false;
}


void VOGL_InitVersion(void) {
	opengl_version = -1;

	char gl_verstr[16];
	const GLubyte* gl_verstr_ub = glGetString(GL_VERSION);
	strncpy(gl_verstr, (const char*)gl_verstr_ub, 16);
	gl_verstr[15] = 0;
	char* gl_ver_minor = strchr(gl_verstr, '.');
	if (gl_ver_minor != NULL) {
		gl_ver_minor++;
		char* skip = strchr(gl_ver_minor, '.');
		if (skip != NULL) *skip = 0;
	}

	int ogl_ver = 100;
	if (gl_verstr[0] != 0) {
		int major = 1;
		int minor = 0;
		if (strchr(gl_verstr, '.') != NULL) {
			if (sscanf(gl_verstr,"%d.%d", &major, &minor) != 2) major = 0;
		} else {
			if (sscanf(gl_verstr, "%d", &major) != 1) major = 0;
		}
		if (major > 0) {
			ogl_ver = major*100;
			if (minor >= 0) {
				if (minor < 10) ogl_ver += minor*10;
				else ogl_ver += minor;
			}
		}
	}

	if (ogl_ver > 0) opengl_version = ogl_ver;
}

void VOGL_ClearShaderFunctions(void) {
	glShaderSourceARB_ptr = NULL;
	glCompileShaderARB_ptr = NULL;
	glCreateProgramObjectARB_ptr = NULL;
	glAttachObjectARB_ptr = NULL;
	glLinkProgramARB_ptr = NULL;
	glUseProgramObjectARB_ptr = NULL;
	glUniform1iARB_ptr = NULL;
	glUniform1fARB_ptr = NULL;
	glUniform2fARB_ptr = NULL;
	glUniform3fARB_ptr = NULL;
	glUniform4fARB_ptr = NULL;
	glGetUniformLocationARB_ptr = NULL;
	glDetachObjectARB_ptr = NULL;
	glDeleteObjectARB_ptr  = NULL;
	glGetObjectParameterivARB_ptr = NULL;
	glGetInfoLogARB_ptr = NULL;
}

bool VOGL_Initialize(void) {
	VOGL_ClearShaderFunctions();
	
	VOGL_InitVersion();

	glActiveTextureARB_ptr = (PFNGLACTIVETEXTUREARBPROC)SDL_GL_GetProcAddress("glActiveTextureARB");
	if (!glActiveTextureARB_ptr) {
		LOG_MSG("opengl: glActiveTextureARB extension not supported");
		return false;
	}

	glMultiTexCoord4fARB_ptr = (PFNGLMULTITEXCOORD4FARBPROC)SDL_GL_GetProcAddress("glMultiTexCoord4fARB");
	if (!glMultiTexCoord4fARB_ptr) {
		LOG_MSG("opengl: glMultiTexCoord4fARB extension not supported");
		return false;
	}

	glMultiTexCoord4fvARB_ptr = (PFNGLMULTITEXCOORD4FVARBPROC)SDL_GL_GetProcAddress("glMultiTexCoord4fvARB");
	if (!glMultiTexCoord4fvARB_ptr) {
		LOG_MSG("opengl: glMultiTexCoord4fvARB extension not supported");
		return false;
	}

	glBlendFuncSeparate_ptr = (PFNGLBLENDFUNCSEPARATEPROC)SDL_GL_GetProcAddress("glBlendFuncSeparate");
	if (!glBlendFuncSeparate_ptr) {
		LOG_MSG("opengl: glBlendFuncSeparate extension not supported");
		return false;
	}

	glGenerateMipmap_ptr = (PFNGLGENERATEMIPMAPEXTPROC)SDL_GL_GetProcAddress("glGenerateMipmap");
	if (!glGenerateMipmap_ptr) {
		LOG_MSG("opengl: glGenerateMipmap extension not supported");
		return false;
	}

	if (VOGL_CheckFeature(VOGL_ATLEAST_V20)) {
		const char* extensions = (const char*)glGetString(GL_EXTENSIONS);
		if (strstr(extensions, "GL_ARB_shader_objects") && strstr(extensions, "GL_ARB_vertex_shader") &&
			strstr(extensions, "GL_ARB_fragment_shader")) {

			glCreateShaderObjectARB_ptr = (PFNGLCREATESHADEROBJECTARBPROC)SDL_GL_GetProcAddress("glCreateShaderObjectARB");
			if (!glCreateShaderObjectARB_ptr) {
				LOG_MSG("opengl: shader extensions not supported. Using fixed pipeline");
			} else {
				glShaderSourceARB_ptr = (PFNGLSHADERSOURCEARBPROC)SDL_GL_GetProcAddress("glShaderSourceARB");
				if (!glShaderSourceARB_ptr) LOG_MSG("opengl: glShaderSourceARB extension not supported");

				glCompileShaderARB_ptr = (PFNGLCOMPILESHADERARBPROC)SDL_GL_GetProcAddress("glCompileShaderARB");
				if (!glCompileShaderARB_ptr) LOG_MSG("opengl: glCompileShaderARB extension not supported");

				glCreateProgramObjectARB_ptr = (PFNGLCREATEPROGRAMOBJECTARBPROC)SDL_GL_GetProcAddress("glCreateProgramObjectARB");
				if (!glCreateProgramObjectARB_ptr) LOG_MSG("opengl: glCreateProgramObjectARB extension not supported");

				glAttachObjectARB_ptr = (PFNGLATTACHOBJECTARBPROC)SDL_GL_GetProcAddress("glAttachObjectARB");
				if (!glAttachObjectARB_ptr) LOG_MSG("opengl: glAttachObjectARB extension not supported");

				glLinkProgramARB_ptr = (PFNGLLINKPROGRAMARBPROC)SDL_GL_GetProcAddress("glLinkProgramARB");
				if (!glLinkProgramARB_ptr) LOG_MSG("opengl: glLinkProgramARB extension not supported");

				glUseProgramObjectARB_ptr = (PFNGLUSEPROGRAMOBJECTARBPROC)SDL_GL_GetProcAddress("glUseProgramObjectARB");
				if (!glUseProgramObjectARB_ptr) LOG_MSG("opengl: glUseProgramObjectARB extension not supported");

				glDeleteProgram_ptr = (PFNGLDELETEPROGRAMPROC)SDL_GL_GetProcAddress("glDeleteProgram");
				if (!glDeleteProgram_ptr) LOG_MSG("opengl: glDeleteProgram extension not supported");

				glUniform1iARB_ptr = (PFNGLUNIFORM1IARBPROC)SDL_GL_GetProcAddress("glUniform1iARB");
				if (!glUniform1iARB_ptr) LOG_MSG("opengl: glUniform1iARB extension not supported");

				glUniform1fARB_ptr = (PFNGLUNIFORM1FARBPROC)SDL_GL_GetProcAddress("glUniform1fARB");
				if (!glUniform1fARB_ptr) LOG_MSG("opengl: glUniform1fARB extension not supported");

				glUniform2fARB_ptr = (PFNGLUNIFORM2FARBPROC)SDL_GL_GetProcAddress("glUniform2fARB");
				if (!glUniform2fARB_ptr) LOG_MSG("opengl: glUniform2fARB extension not supported");

				glUniform3fARB_ptr = (PFNGLUNIFORM3FARBPROC)SDL_GL_GetProcAddress("glUniform3fARB");
				if (!glUniform3fARB_ptr) LOG_MSG("opengl: glUniform3fARB extension not supported");

				glUniform4fARB_ptr = (PFNGLUNIFORM4FARBPROC)SDL_GL_GetProcAddress("glUniform4fARB");
				if (!glUniform4fARB_ptr) LOG_MSG("opengl: glUniform4fARB extension not supported");

				glGetUniformLocationARB_ptr = (PFNGLGETUNIFORMLOCATIONARBPROC)SDL_GL_GetProcAddress("glGetUniformLocationARB");
				if (!glGetUniformLocationARB_ptr) LOG_MSG("opengl: glGetUniformLocationARB extension not supported");

				glDetachObjectARB_ptr = (PFNGLDETACHOBJECTARBPROC)SDL_GL_GetProcAddress("glDetachObjectARB");
				if (!glDetachObjectARB_ptr) LOG_MSG("opengl: glDetachObjectARB extension not supported");

				glDeleteObjectARB_ptr  = (PFNGLDELETEOBJECTARBPROC)SDL_GL_GetProcAddress("glDeleteObjectARB");
				if (!glDeleteObjectARB_ptr) LOG_MSG("opengl: glDeleteObjectARB extension not supported");

				glGetObjectParameterivARB_ptr = (PFNGLGETOBJECTPARAMETERIVARBPROC)SDL_GL_GetProcAddress("glGetObjectParameterivARB");
				if (!glGetObjectParameterivARB_ptr) LOG_MSG("opengl: glGetObjectParameterivARB extension not supported");

				glGetInfoLogARB_ptr = (PFNGLGETINFOLOGARBPROC)SDL_GL_GetProcAddress("glGetInfoLogARB");
				if (!glGetInfoLogARB_ptr) LOG_MSG("opengl: glGetInfoLogARB extension not supported");

				glGetAttribLocationARB_ptr = (PFNGLGETATTRIBLOCATIONARBPROC)SDL_GL_GetProcAddress("glGetAttribLocationARB");
				if (!glGetAttribLocationARB_ptr) LOG_MSG("opengl: glGetAttribLocationARB extension not supported");
			
				glVertexAttrib1fARB_ptr = (PFNGLVERTEXATTRIB1FPROC)SDL_GL_GetProcAddress("glVertexAttrib1fARB");
				if (!glVertexAttrib1fARB_ptr) LOG_MSG("opengl: glVertexAttrib1fARB extension not supported");

				if (glShaderSourceARB_ptr && glCompileShaderARB_ptr && glCreateProgramObjectARB_ptr &&
					glAttachObjectARB_ptr && glLinkProgramARB_ptr && glUseProgramObjectARB_ptr &&
					glUniform1iARB_ptr && glUniform1fARB_ptr && glUniform2fARB_ptr && glUniform3fARB_ptr &&
					glUniform4fARB_ptr && glGetUniformLocationARB_ptr && glDetachObjectARB_ptr &&
					glDeleteObjectARB_ptr && glGetObjectParameterivARB_ptr && glGetInfoLogARB_ptr) {
						VOGL_FlagFeature(VOGL_HAS_SHADERS);
//						LOG_MSG("opengl: shader functionality enabled");
				} else {
					VOGL_ClearShaderFunctions();
				}
			}
		}
	}

	return true;
}


bool VOGL_CheckFeature(Bit32u feat) {
	switch (feat) {
		case VOGL_ATLEAST_V20:
			if (opengl_version >= 200) return true;
			break;
		case VOGL_ATLEAST_V21:
			if (opengl_version >= 210) return true;
			break;
		case VOGL_ATLEAST_V30:
			if (opengl_version >= 300) return true;
			break;
		case VOGL_HAS_SHADERS:
			if (has_shaders) return true;
			break;
		case VOGL_HAS_STENCIL_BUFFER:
			if (has_stencil) return true;
			break;
		case VOGL_HAS_ALPHA_PLANE:
			if (has_alpha) return true;
			break;
		default:
			LOG_MSG("opengl: unknown feature queried: %x",feat);
			break;
	}

	return false;
}

void VOGL_FlagFeature(Bit32u feat) {
	switch (feat) {
		case VOGL_HAS_SHADERS:
			has_shaders = true;
			break;
		case VOGL_HAS_STENCIL_BUFFER:
			has_stencil = true;
			break;
		case VOGL_HAS_ALPHA_PLANE:
			has_alpha = true;
			break;
		default:
			LOG_MSG("opengl: unknown feature: %x",feat);
			break;
	}
}


void VOGL_BeginMode(int32_t new_mode) {
	if (current_begin_mode > -1) {
		if (new_mode != current_begin_mode) {
			glEnd();
			if (new_mode > -1) glBegin(new_mode);
			current_begin_mode = new_mode;
		}
	} else {
		if (new_mode > -1) {
			glBegin(new_mode);
			current_begin_mode = new_mode;
		}
	}
}

void VOGL_ClearBeginMode(void) {
	if (current_begin_mode > -1) {
		glEnd();
		current_begin_mode = -1;
	}
}


void VOGL_SetDepthMode(Bit32s mode, Bit32s func) {
	if (current_depth_mode!=mode) {
		if (mode!=0) {
			VOGL_ClearBeginMode();
			glEnable(GL_DEPTH_TEST);
			current_depth_mode=1;
			if (current_depth_func!=func) {
				glDepthFunc(GL_NEVER+func);
				current_depth_func=func;
			}
		} else {
			VOGL_ClearBeginMode();
			glDisable(GL_DEPTH_TEST);
			current_depth_mode=0;
		}
	} else {
		if ((mode!=0) && (current_depth_func!=func)) {
			VOGL_ClearBeginMode();
			glDepthFunc(GL_NEVER+func);
			current_depth_func=func;
		}
	}
}


void VOGL_SetAlphaMode(Bit32s enabled_mode,GLuint src_rgb_fac,GLuint dst_rgb_fac,
											GLuint src_alpha_fac,GLuint dst_alpha_fac) {
	if (current_alpha_enabled!=enabled_mode) {
		VOGL_ClearBeginMode();
		if (enabled_mode!=0) {
			glEnable(GL_BLEND);
			current_alpha_enabled=1;
			if ((current_src_rgb_fac!=(Bit32s)src_rgb_fac) || (current_dst_rgb_fac!=(Bit32s)dst_rgb_fac) ||
				(current_src_alpha_fac!=(Bit32s)src_alpha_fac) || (current_dst_alpha_fac!=(Bit32s)dst_alpha_fac)) {
				glBlendFuncSeparate_ptr(src_rgb_fac, dst_rgb_fac, src_alpha_fac, dst_alpha_fac);
				current_src_rgb_fac=(Bit32s)src_rgb_fac;
				current_dst_rgb_fac=(Bit32s)dst_rgb_fac;
				current_src_alpha_fac=(Bit32s)src_alpha_fac;
				current_dst_alpha_fac=(Bit32s)dst_alpha_fac;
			}
		} else {
			glDisable(GL_BLEND);
			current_alpha_enabled=0;
		}
	} else {
		if (current_alpha_enabled!=0) {
			if ((current_src_rgb_fac!=(Bit32s)src_rgb_fac) || (current_dst_rgb_fac!=(Bit32s)dst_rgb_fac) ||
				(current_src_alpha_fac!=(Bit32s)src_alpha_fac) || (current_dst_alpha_fac!=(Bit32s)dst_alpha_fac)) {
				VOGL_ClearBeginMode();
				glBlendFuncSeparate_ptr(src_rgb_fac, dst_rgb_fac, src_alpha_fac, dst_alpha_fac);
				current_src_rgb_fac=(Bit32s)src_rgb_fac;
				current_dst_rgb_fac=(Bit32s)dst_rgb_fac;
				current_src_alpha_fac=(Bit32s)src_alpha_fac;
				current_dst_alpha_fac=(Bit32s)dst_alpha_fac;
			}
		}
	}
}


void VOGL_SetDepthMaskMode(bool masked) {
	if (depth_masked!=masked) {
		VOGL_ClearBeginMode();
		if (masked) {
			glDepthMask(GL_TRUE);
			depth_masked=true;
		} else {
			glDepthMask(GL_FALSE);
			depth_masked=false;
		}
	}
}


void VOGL_SetColorMaskMode(bool cmasked, bool amasked) {
	if ((color_masked!=cmasked) || (alpha_masked!=amasked)) {
		color_masked=cmasked;
		alpha_masked=amasked;
		GLboolean cm = (color_masked ? GL_TRUE : GL_FALSE);
		GLboolean am = (alpha_masked ? GL_TRUE : GL_FALSE);
		glColorMask(cm,cm,cm,am);
	}
}


void VOGL_SetDrawMode(bool front_draw) {
	if (draw_to_front_buffer!=front_draw) {
		VOGL_ClearBeginMode();
		if (front_draw) glDrawBuffer(GL_FRONT);
		else glDrawBuffer(GL_BACK);
		draw_to_front_buffer=front_draw;
	}
}


void VOGL_SetReadMode(bool front_read) {
	VOGL_ClearBeginMode();

	if (read_from_front_buffer!=front_read) {
		if (front_read) glReadBuffer(GL_FRONT);
		else glReadBuffer(GL_BACK);
		read_from_front_buffer=front_read;
	}
}

#endif
