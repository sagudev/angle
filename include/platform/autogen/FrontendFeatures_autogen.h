// GENERATED FILE - DO NOT EDIT.
// Generated by gen_features.py using data from frontend_features.json.
//
// Copyright 2022 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// FrontendFeatures_autogen.h: Features/workarounds for driver bugs and other behaviors seen
// on all platforms.

#ifndef ANGLE_PLATFORM_AUTOGEN_FRONTENDFEATURES_H_
#define ANGLE_PLATFORM_AUTOGEN_FRONTENDFEATURES_H_

#include "platform/Feature.h"

namespace angle
{

struct FrontendFeatures : FeatureSetBase
{
    FrontendFeatures();
    ~FrontendFeatures();

    FeatureInfo loseContextOnOutOfMemory = {
        "loseContextOnOutOfMemory",
        FeatureCategory::FrontendWorkarounds,
        "Some users rely on a lost context notification if a GL_OUT_OF_MEMORY error occurs",
        &members,
    };

    FeatureInfo disableProgramCachingForTransformFeedback = {
        "disableProgramCachingForTransformFeedback",
        FeatureCategory::FrontendWorkarounds,
        "On some GPUs, program binaries don't contain transform feedback varyings",
        &members,
    };

    FeatureInfo disableProgramBinary = {
        "disableProgramBinary",
        FeatureCategory::FrontendFeatures,
        "Disable support for GL_OES_get_program_binary",
        &members, "http://anglebug.com/42263580"
    };

    FeatureInfo disableDrawBuffersIndexed = {
        "disableDrawBuffersIndexed",
        FeatureCategory::FrontendFeatures,
        "Disable support for OES_draw_buffers_indexed and EXT_draw_buffers_indexed",
        &members, "http://anglebug.com/42266194"
    };

    FeatureInfo disableAnisotropicFiltering = {
        "disableAnisotropicFiltering",
        FeatureCategory::FrontendWorkarounds,
        "Disable support for anisotropic filtering",
        &members,
    };

    FeatureInfo allowCompressedFormats = {
        "allowCompressedFormats",
        FeatureCategory::FrontendWorkarounds,
        "Allow compressed formats",
        &members,
    };

    FeatureInfo singleThreadedTextureDecompression = {
        "singleThreadedTextureDecompression",
        FeatureCategory::FrontendWorkarounds,
        "Disables multi-threaded decompression of compressed texture formats",
        &members,
    };

    FeatureInfo forceDepthAttachmentInitOnClear = {
        "forceDepthAttachmentInitOnClear",
        FeatureCategory::FrontendWorkarounds,
        "Force depth attachment initialization on clear ops",
        &members, "https://anglebug.com/42265720"
    };

    FeatureInfo enableCaptureLimits = {
        "enableCaptureLimits",
        FeatureCategory::FrontendFeatures,
        "Set the context limits like frame capturing was enabled",
        &members, "http://anglebug.com/42264287"
    };

    FeatureInfo forceRobustResourceInit = {
        "forceRobustResourceInit",
        FeatureCategory::FrontendFeatures,
        "Force-enable robust resource init",
        &members, "http://anglebug.com/42264571"
    };

    FeatureInfo forceInitShaderVariables = {
        "forceInitShaderVariables",
        FeatureCategory::FrontendFeatures,
        "Force-enable shader variable initialization",
        &members,
    };

    FeatureInfo enableProgramBinaryForCapture = {
        "enableProgramBinaryForCapture",
        FeatureCategory::FrontendFeatures,
        "Even if FrameCapture is enabled, enable GL_OES_get_program_binary",
        &members, "http://anglebug.com/42264193"
    };

    FeatureInfo forceGlErrorChecking = {
        "forceGlErrorChecking",
        FeatureCategory::FrontendFeatures,
        "Force GL error checking (i.e. prevent applications from disabling error checking",
        &members, "https://issuetracker.google.com/220069903"
    };

    FeatureInfo emulatePixelLocalStorage = {
        "emulatePixelLocalStorage",
        FeatureCategory::FrontendFeatures,
        "Emulate ANGLE_shader_pixel_local_storage using shader images",
        &members, "http://anglebug.com/40096838"
    };

    FeatureInfo cacheCompiledShader = {
        "cacheCompiledShader",
        FeatureCategory::FrontendFeatures,
        "Enable to cache compiled shaders",
        &members, "http://anglebug.com/42265509"
    };

    FeatureInfo dumpShaderSource = {
        "dumpShaderSource",
        FeatureCategory::FrontendFeatures,
        "Write shader source to temp directory",
        &members, "http://anglebug.com/42266231"
    };

    FeatureInfo enableShaderSubstitution = {
        "enableShaderSubstitution",
        FeatureCategory::FrontendWorkarounds,
        "Check the filesystem for shaders to use instead of those provided through glShaderSource",
        &members, "http://anglebug.com/42266232"
    };

    FeatureInfo disableProgramCaching = {
        "disableProgramCaching",
        FeatureCategory::FrontendFeatures,
        "Disables saving programs to the cache",
        &members, "http://anglebug.com/1423136"
    };

    FeatureInfo dumpTranslatedShaders = {
        "dumpTranslatedShaders",
        FeatureCategory::FrontendFeatures,
        "Write translated shaders to temp directory",
        &members, "http://anglebug.com/40644912"
    };

    FeatureInfo enableTranslatedShaderSubstitution = {
        "enableTranslatedShaderSubstitution",
        FeatureCategory::FrontendWorkarounds,
        "Check the filesystem for translated shaders to use instead of the shader translator's",
        &members, "http://anglebug.com/40644912"
    };

    FeatureInfo compileJobIsThreadSafe = {
        "compileJobIsThreadSafe",
        FeatureCategory::FrontendFeatures,
        "If false, parts of the compile job cannot be parallelized",
        &members, "http://anglebug.com/41488637"
    };

    FeatureInfo linkJobIsThreadSafe = {
        "linkJobIsThreadSafe",
        FeatureCategory::FrontendFeatures,
        "If false, parts of the link job cannot be parallelized",
        &members, "http://anglebug.com/41488637"
    };

    FeatureInfo alwaysRunLinkSubJobsThreaded = {
        "alwaysRunLinkSubJobsThreaded",
        FeatureCategory::FrontendFeatures,
        "If true, sub tasks of the link job are always threaded, regardless of GL_KHR_parallel_shader_compile",
        &members, "http://anglebug.com/42266842"
    };

    FeatureInfo uncurrentEglSurfaceUponSurfaceDestroy = {
        "uncurrentEglSurfaceUponSurfaceDestroy",
        FeatureCategory::FrontendWorkarounds,
        "Make egl surface uncurrent when calling eglDestroySurface(), if the surface is still bound by the context of current render thread",
        &members, "https://issuetracker.google.com/292285899"
    };

    FeatureInfo forceMinimumMaxVertexAttributes = {
        "forceMinimumMaxVertexAttributes",
        FeatureCategory::FrontendFeatures,
        "Force the minimum GL_MAX_VERTEX_ATTRIBS that the context's client version allows.",
        &members, ""
    };

    FeatureInfo forceFlushAfterDrawcallUsingShadowmap = {
        "forceFlushAfterDrawcallUsingShadowmap",
        FeatureCategory::FrontendWorkarounds,
        "Force flush after drawcall use shadow map for intel device.",
        &members, "https://issuetracker.google.com/349489248"
    };

};

inline FrontendFeatures::FrontendFeatures()  = default;
inline FrontendFeatures::~FrontendFeatures() = default;

}  // namespace angle

#endif  // ANGLE_PLATFORM_AUTOGEN_FRONTENDFEATURES_H_
