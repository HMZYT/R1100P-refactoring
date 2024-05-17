#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMAGE_FAN0
#define LV_ATTRIBUTE_IMAGE_FAN0
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMAGE_FAN0 uint8_t fan0_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x66, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x65, 0xe0, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0x80, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x40, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x20, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x6e, 0x00, 0x5e, 0xe0, 0x5d, 0x20, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x65, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x65, 0xe0, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x66, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0xa0, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x20, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x60, 0x6e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x66, 0x00, 0x00, 0x40, 0x66, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x40, 0x66, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x6e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x76, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x60, 0x6e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xaf, 0x20, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x6e, 0x00, 0x66, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x60, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x87, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x80, 0x66, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x66, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0x40, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0x20, 0x66, 0x00, 0x00, 0x00, 0x86, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x20, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x66, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0xa0, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x40, 0x66, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x40, 0x5e, 0x00, 0x00, 0x00, 0x66, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0x65, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x40, 0x66, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x20, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x5e, 0xe0, 0x5d, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0xe0, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x66, 0x20, 0x5e, 0x00, 0x5e, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x65, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x5e, 0x00, 0x5e, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0xe0, 0x5d, 0x00, 0x5e, 0x00, 0x5e, 0x60, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x5a, 0x95, 0xc8, 0xe4, 0xf3, 0xfc, 0xf3, 0xe8, 0xcd, 0xac, 0x7a, 0x3a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x95, 0xf3, 0xfd, 0xcc, 0x98, 0x74, 0x64, 0x5d, 0x70, 0x85, 0x99, 0xb6, 0xf5, 0xff, 0xe2, 0x7c, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xee, 0xec, 0x79, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x4c, 0x9d, 0xfb, 0xe3, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xfe, 0xa0, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0xda, 0xf9, 0x4d, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x57, 0xff, 0x75, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xc0, 0xf1, 0x23, 0x8d, 0xbc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x23, 0xf5, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0xf5, 0xe3, 0xff, 0xec, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xab, 0xc3, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xde, 0xff, 0xff, 0xff, 0x1d, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x31, 0xfb, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x4d, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x94, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xe2, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7d, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xb9, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x58, 0xb9, 0xfd, 0xff, 0xff, 0xae, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x7a, 0xda, 0xde, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x4b, 0x85, 0x8e, 0x5f, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x97, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xdb, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd4, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x54, 0x4f, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x43, 0xd0, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0c, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x68, 0x00, 0x00, 0x00, 0x6d, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa1, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x16, 0x00, 0x00, 0x5e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xab, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa8, 0x00, 0x00, 0x1c, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x58, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x4a, 0x00, 0x00, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xde, 0x05, 0x00, 
  0x00, 0x00, 0x00, 0xb0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x12, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5f, 0x00, 
  0x00, 0x00, 0x00, 0x5d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1b, 0x00, 0x68, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xac, 0x00, 
  0x00, 0x00, 0x00, 0x0a, 0xe4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x43, 0x00, 0xa1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x33, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x73, 0x00, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xc2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0xa6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x93, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0xac, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xae, 0x42, 0x8f, 0xff, 0xff, 0xf6, 0xc3, 0x94, 0x7a, 0x98, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x0f, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x27, 0x6b, 0xff, 0xfa, 0x0a, 0x00, 0x00, 0xd4, 0xff, 0x34, 0x00, 0x00, 0x00, 0x00, 0x02, 0x49, 0xb1, 0xe4, 0xd7, 0x81, 0x0b, 0x00, 0x00, 
  0x00, 0x10, 0x97, 0xf4, 0xff, 0xdf, 0x78, 0x13, 0x00, 0x00, 0x00, 0x00, 0x38, 0xff, 0xfd, 0x15, 0x00, 0x04, 0xe3, 0xff, 0x9c, 0x50, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x10, 0xd1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xbb, 0x97, 0x9e, 0xcc, 0xfd, 0xff, 0xff, 0xd0, 0x77, 0xb8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x6b, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xab, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdd, 0x00, 0x54, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xd7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xae, 0x00, 0x13, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x1c, 0x00, 0x00, 0x00, 0x00, 
  0x94, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x72, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7c, 0x00, 0x00, 0x00, 0x00, 
  0x43, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x17, 0x00, 0x08, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xc5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa1, 0x00, 0x00, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3a, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x20, 0x00, 0x00, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb5, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x73, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5d, 0x00, 0x00, 0x12, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7b, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x62, 0x00, 0x00, 0x00, 0x5c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x0d, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x36, 0xa7, 0xf6, 0xff, 0xff, 0xfe, 0xbd, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x36, 0x3b, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x7f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x6c, 0x62, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_image_dsc_t fan0 = {
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.w = 34,
  .header.h = 48,
  .data_size = 1632 * 3,
  .data = fan0_map,
};
