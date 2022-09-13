// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and wgl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL41_autogen.h:
//   Validation functions for the OpenGL 4.1 entry points.

#ifndef LIBANGLE_VALIDATION_GL41_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL41_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateDepthRangeArrayv(Context *context, GLuint first, GLsizei count, const GLdouble *v);
bool ValidateDepthRangeIndexed(Context *context, GLuint index, GLdouble n, GLdouble f);
bool ValidateGetDoublei_v(Context *context, GLenum target, GLuint index, GLdouble *data);
bool ValidateGetFloati_v(Context *context, GLenum target, GLuint index, GLfloat *data);
bool ValidateGetVertexAttribLdv(Context *context, GLuint index, GLenum pname, GLdouble *params);
bool ValidateProgramUniform1d(Context *context, GLuint program, GLint location, GLdouble v0);
bool ValidateProgramUniform1dv(Context *context,
                               GLuint program,
                               GLint location,
                               GLsizei count,
                               const GLdouble *value);
bool ValidateProgramUniform2d(Context *context,
                              GLuint program,
                              GLint location,
                              GLdouble v0,
                              GLdouble v1);
bool ValidateProgramUniform2dv(Context *context,
                               GLuint program,
                               GLint location,
                               GLsizei count,
                               const GLdouble *value);
bool ValidateProgramUniform3d(Context *context,
                              GLuint program,
                              GLint location,
                              GLdouble v0,
                              GLdouble v1,
                              GLdouble v2);
bool ValidateProgramUniform3dv(Context *context,
                               GLuint program,
                               GLint location,
                               GLsizei count,
                               const GLdouble *value);
bool ValidateProgramUniform4d(Context *context,
                              GLuint program,
                              GLint location,
                              GLdouble v0,
                              GLdouble v1,
                              GLdouble v2,
                              GLdouble v3);
bool ValidateProgramUniform4dv(Context *context,
                               GLuint program,
                               GLint location,
                               GLsizei count,
                               const GLdouble *value);
bool ValidateProgramUniformMatrix2dv(Context *context,
                                     GLuint program,
                                     GLint location,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLdouble *value);
bool ValidateProgramUniformMatrix2x3dv(Context *context,
                                       GLuint program,
                                       GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLdouble *value);
bool ValidateProgramUniformMatrix2x4dv(Context *context,
                                       GLuint program,
                                       GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLdouble *value);
bool ValidateProgramUniformMatrix3dv(Context *context,
                                     GLuint program,
                                     GLint location,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLdouble *value);
bool ValidateProgramUniformMatrix3x2dv(Context *context,
                                       GLuint program,
                                       GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLdouble *value);
bool ValidateProgramUniformMatrix3x4dv(Context *context,
                                       GLuint program,
                                       GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLdouble *value);
bool ValidateProgramUniformMatrix4dv(Context *context,
                                     GLuint program,
                                     GLint location,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLdouble *value);
bool ValidateProgramUniformMatrix4x2dv(Context *context,
                                       GLuint program,
                                       GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLdouble *value);
bool ValidateProgramUniformMatrix4x3dv(Context *context,
                                       GLuint program,
                                       GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLdouble *value);
bool ValidateScissorArrayv(Context *context, GLuint first, GLsizei count, const GLint *v);
bool ValidateScissorIndexed(Context *context,
                            GLuint index,
                            GLint left,
                            GLint bottom,
                            GLsizei width,
                            GLsizei height);
bool ValidateScissorIndexedv(Context *context, GLuint index, const GLint *v);
bool ValidateVertexAttribL1d(Context *context, GLuint index, GLdouble x);
bool ValidateVertexAttribL1dv(Context *context, GLuint index, const GLdouble *v);
bool ValidateVertexAttribL2d(Context *context, GLuint index, GLdouble x, GLdouble y);
bool ValidateVertexAttribL2dv(Context *context, GLuint index, const GLdouble *v);
bool ValidateVertexAttribL3d(Context *context, GLuint index, GLdouble x, GLdouble y, GLdouble z);
bool ValidateVertexAttribL3dv(Context *context, GLuint index, const GLdouble *v);
bool ValidateVertexAttribL4d(Context *context,
                             GLuint index,
                             GLdouble x,
                             GLdouble y,
                             GLdouble z,
                             GLdouble w);
bool ValidateVertexAttribL4dv(Context *context, GLuint index, const GLdouble *v);
bool ValidateVertexAttribLPointer(Context *context,
                                  GLuint index,
                                  GLint size,
                                  GLenum type,
                                  GLsizei stride,
                                  const void *pointer);
bool ValidateViewportArrayv(Context *context, GLuint first, GLsizei count, const GLfloat *v);
bool ValidateViewportIndexedf(Context *context,
                              GLuint index,
                              GLfloat x,
                              GLfloat y,
                              GLfloat w,
                              GLfloat h);
bool ValidateViewportIndexedfv(Context *context, GLuint index, const GLfloat *v);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL41_AUTOGEN_H_
