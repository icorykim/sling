set(WTF_PLATFORM_WIN_CAIRO 1)

include(OptionsWin)

set(USE_CF 1)
#set(USE_CURL 1)
set(USE_CRNET 1)
set(USE_ICU_UNICODE 1)
set(USE_TEXTURE_MAPPER_GL 1)

set(ENABLE_GRAPHICS_CONTEXT_3D 1)

add_definitions(-DWTF_PLATFORM_WIN_CAIRO=1)

if (ENABLE_ACCELERATED_2D_CANVAS)
    add_definitions(-DCAIRO_HAS_EGL_FUNCTIONS=1)
endif ()
