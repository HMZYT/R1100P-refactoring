cmake_minimum_required(VERSION 3.10)
project(lvgl LANGUAGES CXX C)

option(LV_USE_DRAW_SDL "Use SDL draw unit" OFF)
option(LV_USE_LIBPNG "Use libpng to decode PNG" OFF)
option(LV_USE_LIBJPEG_TURBO "Use libjpeg turbo to decode JPEG" OFF)
option(LV_USE_FFMPEG "Use libffmpeg to display video using lv_ffmpeg" OFF)
option(LV_USE_FREETYPE "Use freetype lib" OFF)

set(CMAKE_C_STANDARD 99)#C99 # lvgl officially support C99 and above
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lv_port_pc_eclipse/bin)

find_package(SDL2 REQUIRED SDL2)

add_compile_definitions($<$<BOOL:${LV_USE_DRAW_SDL}>:LV_USE_DRAW_SDL=1>)
add_compile_definitions($<$<BOOL:${LV_USE_LIBPNG}>:LV_USE_LIBPNG=1>)
add_compile_definitions($<$<BOOL:${LV_USE_LIBJPEG_TURBO}>:LV_USE_LIBJPEG_TURBO=1>)
add_compile_definitions($<$<BOOL:${LV_USE_FFMPEG}>:LV_USE_FFMPEG=1>)

add_subdirectory(lv_port_pc_eclipse/lvgl)

target_include_directories(lvgl PUBLIC ${PROJECT_SOURCE_DIR}/lv_port_pc_eclipse ${SDL2_INCLUDE_DIRS})

file(GLOB_RECURSE INCLUDES
        "app/R3100P/Controller/inc/*.h"
        "app/R3100P/View/UI/inc/*.h"
        "app/R3100P/View/User/inc/*.h"
        "app/R3100P/Model/inc/*.h"
        "app/inc/*.h"
        "extensions/data-types/inc/*.h"
        "drivers/board/inc/*.h"
        "drivers/bsp/inc/*.h"
        "drivers/dev/inc/*.h"
        "res/fonts/*.h"
        "theme/inc/*.h"
        "api/inc/*.h")
file(GLOB_RECURSE SOURCES
        "app/R3100P/Controller/src/*.c"
        "app/R3100P/View/UI/src/*.c"
        "app/R3100P/View/User/src/*.cpp"
        "app/R3100P/Model/src/*.c"
        "app/R3100P/Controller/src/*.cpp"
        "app/R3100P/View/src/*.cpp"
        "app/R3100P/Model/src/*.cpp"
        "app/src/*.cpp"
        "app/src/*.c"
        "extensions/data-types/src/*.c"
        "drivers/board/src/*.c"
        "drivers/bsp/src/*.c"
        "drivers/dev/src/*.c"
        "images/*.c"
        "res/fonts/*.c"
        "theme/src/*.c"
        "api/src/*.c")

add_executable(main main.c lv_port_pc_eclipse/mouse_cursor_icon.c ${SOURCES} ${INCLUDES})

target_compile_definitions(main PRIVATE LV_CONF_INCLUDE_SIMPLE)
target_link_libraries(main lvgl lvgl::examples lvgl::demos lvgl::thorvg ${SDL2_LIBRARIES} m pthread)
add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main DEPENDS main)

if(LV_USE_DRAW_SDL)
    set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
    # Need to install libsdl2-image-dev
    # `sudo apt install libsdl2-image-dev`
    # `brew install sdl2_image`
    find_package(SDL2_image REQUIRED)
    target_include_directories(lvgl PUBLIC ${SDL2_IMAGE_INCLUDE_DIRS})
    target_link_libraries(main ${SDL2_IMAGE_LIBRARIES})
endif(LV_USE_DRAW_SDL)

if(LV_USE_LIBPNG)
    find_package(PNG REQUIRED)
    target_include_directories(lvgl PUBLIC ${PNG_INCLUDE_DIR})
    target_link_libraries(main ${PNG_LIBRARY})
endif(LV_USE_LIBPNG)

if(LV_USE_LIBJPEG_TURBO)
    # Need to install libjpeg-turbo8-dev
    # `sudo apt install libjpeg-turbo8-dev`
    # `brew install libjpeg-turbo`
    find_package(JPEG REQUIRED)
    target_include_directories(lvgl PUBLIC ${JPEG_INCLUDE_DIRS})
    target_link_libraries(main ${JPEG_LIBRARIES})
endif(LV_USE_LIBJPEG_TURBO)

if(LV_USE_FFMPEG)
    target_link_libraries(main avformat avcodec avutil swscale)
endif(LV_USE_FFMPEG)

if(LV_USE_FREETYPE)
    find_package(Freetype REQUIRED)
    target_link_libraries(main ${FREETYPE_LIBRARIES})
    target_include_directories(lvgl PUBLIC ${FREETYPE_INCLUDE_DIRS})
endif(LV_USE_FREETYPE)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(lvgl PRIVATE
            -pedantic-errors
            -Wall
            -Wclobbered
            -Wdeprecated
            -Wdouble-promotion
            -Wempty-body
            -Wextra
            -Wformat-security
            -Wmaybe-uninitialized
            # -Wmissing-prototypes
            -Wpointer-arith
            -Wmultichar
            -Wno-pedantic # ignored for now, we convert functions to pointers for propertis table.
            -Wreturn-type
            -Wshadow
            -Wshift-negative-value
            -Wsizeof-pointer-memaccess
            -Wtype-limits
            -Wundef
            -Wuninitialized
            -Wunreachable-code
            -Wfloat-conversion
            -Wstrict-aliasing
    )
    #
    #    target_compile_options(main PRIVATE -fsanitize=address,leak,undefined)
    #    target_link_options(main PRIVATE -fsanitize=address,leak,undefined)
endif()
