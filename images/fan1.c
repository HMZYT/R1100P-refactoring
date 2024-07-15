
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_FAN1
#define LV_ATTRIBUTE_FAN1
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_FAN1
uint8_t fan1_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x20,0x76,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x66,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x40,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x65,0xe0,0x5d,0x00,0x5e,0x00,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x40,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x20,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x20,0x76,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x20,0x66,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x85,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x86,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x87,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x85,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x66,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x85,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x20,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xc0,0x6e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xc0,0x6e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x65,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x60,0x66,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xa0,0x86,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xa0,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x60,0x66,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x40,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x85,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x85,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x65,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x66,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x40,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x6e,0x40,0x5e,0xe0,0x87,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xaf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0x80,0x5e,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x40,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xc0,0x6e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x86,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x80,0x5e,0xe0,0x5d,0xe0,0x5d,0x60,0x66,0x00,0x00,0xe0,0xff,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xa0,0x86,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xc0,0x6e,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xaf,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0xaf,0x20,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x20,0x66,0xe0,0x5d,0xe0,0x5d,0x20,0x76,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0x00,0x5e,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x40,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0xe0,0x5d,0x20,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x5e,0x20,0x5e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x00,0x66,0x60,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x6a,0xac,0xe8,0xf5,0xd5,0x7d,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x8b,0xf5,0xff,0xff,0xff,0xff,0xff,0xff,0xcb,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xeb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xa3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6f,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x3c,0x36,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x46,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x56,0x00,0x00,0x00,0x00,0x00,0x43,0xb6,0xfc,0xff,0xff,0xff,0xcd,0x71,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0xeb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x4c,0x00,0x00,0x00,0x00,0x77,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xde,0x38,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x5d,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0x15,0x00,0x00,0x00,0x98,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xa4,0x00,0x00,0x00,0x63,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xeb,0x1e,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xf2,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3d,0x00,0x00,0x14,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf6,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe5,0x00,0x00,0x00,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x00,0x00,0x09,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9b,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xae,0x00,0x00,0x59,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0x0d,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x38,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc1,0x00,0x00,0x99,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x4c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf2,0x04,0x00,0xc5,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x79,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xae,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x76,0x3b,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x94,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x45,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4d,0xd8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x56,0xb1,0xf9,0xff,0xff,0xff,0xff,0xfa,0x61,0x1d,0x73,0xff,0xff,0xff,0xd0,0x88,0x64,0x5e,0x7f,0xbd,0xfe,0xff,0xff,0xff,0xff,0xff,0xe2,0x25,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x25,0x57,0xee,0xff,0xa2,0x00,0x00,0x00,0xba,0xff,0xa3,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0x8b,0xe6,0xff,0xec,0x97,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x16,0x97,0xe1,0xed,0xc3,0x5e,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0xd3,0xff,0x9d,0x00,0x00,0x00,0xbb,0xff,0xc3,0x34,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x32,0xeb,0xff,0xff,0xff,0xff,0xff,0xea,0x8b,0x55,0x3d,0x48,0x78,0xc7,0xff,0xff,0xf7,0x57,0x18,0x65,0xfe,0xff,0xff,0xff,0xfc,0xd3,0x7b,0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xe8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0x98,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x76,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xec,0x45,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0x52,0xc4,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0x57,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xb7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x90,0x00,0x3c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,0x3a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x64,0x00,0x06,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe8,0x06,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x4f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x2a,0x00,0x00,0xe8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x56,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcc,0x00,0x00,0x00,0xe8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xaf,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x8e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x65,0x00,0x00,0x13,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xba,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x16,0xf5,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xda,0x04,0x00,0x00,0x61,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xb6,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x63,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0x47,0x00,0x00,0x00,0xd0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x99,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7d,0x00,0x00,0x00,0x3c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x28,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x04,0x84,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0x6b,0x00,0x00,0x00,0x00,0x84,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3b,0xac,0xf8,0xff,0xff,0xff,0xff,0xc5,0x40,0x00,0x00,0x00,0x00,0x00,0x95,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf5,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x52,0x5d,0x61,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x67,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0d,0xe8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe4,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xf6,0xff,0xff,0xff,0xff,0xff,0xff,0xf4,0x89,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xb9,0xf9,0xff,0xf2,0xb5,0x72,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0e,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x4d,0xe1,0xdb,0x0b,0x00,0x00,0x41,0xe1,0x6d,0x00,0x00,0x17,0xe1,0x86,0x00,0xdb,0xe1,0xe1,0xe1,0xe1,0xe1,0xb8,0x00,0x00,0x62,0xd6,0xfc,0xe2,0x8a,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa5,0xe5,0xff,0x53,0x00,0x00,0x4a,0xff,0x7c,0x00,0x00,0x1a,0xff,0x99,0x00,0x94,0x98,0xc9,0xff,0xb7,0x98,0x7c,0x00,0x6f,0xff,0xd8,0x89,0xbf,0xff,0xac,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x06,0xf1,0x82,0xe5,0xa6,0x00,0x00,0x4a,0xff,0x7c,0x00,0x00,0x1a,0xff,0x99,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x0b,0xef,0xf6,0x0f,0x00,0x01,0xc7,0xff,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0xff,0x3f,0xa1,0xf1,0x06,0x00,0x4a,0xff,0x7c,0x00,0x00,0x1a,0xff,0x99,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x34,0xff,0xba,0x00,0x00,0x00,0x7d,0xff,0x71,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x9b,0xf5,0x07,0x5b,0xff,0x4a,0x00,0x4a,0xff,0x7c,0x00,0x00,0x1a,0xff,0x99,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x50,0xff,0x86,0x00,0x00,0x00,0x49,0xff,0x8e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xea,0xef,0xa8,0xb8,0xff,0x9d,0x00,0x3a,0xff,0x90,0x00,0x00,0x2f,0xff,0x8a,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x36,0xff,0xb6,0x00,0x00,0x00,0x79,0xff,0x73,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x3f,0xff,0xd0,0xb8,0xb8,0xea,0xeb,0x03,0x1b,0xff,0xca,0x00,0x00,0x6a,0xff,0x6a,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x0d,0xf3,0xf3,0x09,0x00,0x00,0xbf,0xff,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x91,0xff,0x29,0x00,0x00,0x87,0xff,0x41,0x00,0xbc,0xff,0xb1,0x8a,0xf1,0xf6,0x17,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x00,0x7b,0xff,0xc8,0x6e,0xa8,0xff,0xb8,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xe2,0xe3,0x00,0x00,0x00,0x41,0xff,0x94,0x00,0x1f,0xc3,0xff,0xff,0xe7,0x4c,0x00,0x00,0x00,0x00,0x7a,0xff,0x4c,0x00,0x00,0x00,0x01,0x7a,0xf1,0xff,0xf9,0xa4,0x0d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x1a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1d,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t fan1 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 42,
  .header.h = 59,
  .header.stride = 84,
  .data_size = sizeof(fan1_map),
  .data = fan1_map,
};
