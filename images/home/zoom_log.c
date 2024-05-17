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

#ifndef LV_ATTRIBUTE_IMAGE_ZOOM_LOG
#define LV_ATTRIBUTE_IMAGE_ZOOM_LOG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMAGE_ZOOM_LOG uint8_t zoom_log_map[] = {
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x49, 0x4a, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xc7, 0x39, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xc7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xc7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xff, 0xff, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa6, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa6, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x4a, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0xc7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xab, 0x5a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xe7, 0x39, 0x00, 0x00, 0xc7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xc7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xc7, 0x39, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 
  0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0xa6, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0xa6, 0x31, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 0x86, 0x31, 

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x42, 0x95, 0xba, 0xd5, 0xf1, 0xf1, 0xd6, 0xbb, 0x95, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x96, 0xba, 0xd5, 0xf1, 0xf1, 0xd6, 0xbb, 0x94, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x07, 0x00, 0x05, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x43, 0x95, 0xba, 0xd5, 0xf1, 0xf1, 0xd6, 0xbb, 0x95, 0x42, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfe, 0x42, 0x00, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x00, 0x00, 0x0e, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x0e, 0x00, 0x0f, 0xba, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x0e, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x00, 0x36, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0e, 0xb8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x0e, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x0b, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 
  0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x00, 0x00, 0x9c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9a, 0x00, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x78, 0x00, 0x71, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9c, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x94, 0x00, 0x00, 0x00, 0xf5, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xac, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x00, 0x00, 0xdb, 0xff, 0xff, 0xff, 0xfa, 0x92, 0x57, 0x55, 0x8e, 0xf8, 0xff, 0xff, 0xff, 0xd6, 0x00, 0xdc, 0xff, 0xff, 0xff, 0xfa, 0x93, 0x57, 0x55, 0x8e, 0xf8, 0xff, 0xff, 0xff, 0xd8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xb3, 0x00, 0xab, 0xff, 0xff, 0xe5, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd9, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3e, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa4, 0xff, 0xff, 0xff, 0xff, 0x69, 0x00, 0x00, 0x00, 0xea, 0xff, 0xff, 0xff, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x63, 0xff, 0xff, 0xff, 0xe7, 0x00, 0xea, 0xff, 0xff, 0xff, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x65, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xb6, 0xff, 0xff, 0xed, 0x01, 0xe6, 0xff, 0xff, 0xa8, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xea, 0xff, 0xff, 0xff, 0xc8, 0x3e, 0x10, 0x10, 0x3f, 0xc8, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0x0a, 0x00, 0xf5, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x9c, 0xff, 0xff, 0xff, 0xff, 0x72, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x38, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xff, 0xff, 0xff, 0xf7, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x37, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x79, 0xff, 0xff, 0xff, 0x4c, 0xff, 0xff, 0xfd, 0x6e, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xf9, 0xff, 0xff, 0xff, 0x22, 0x00, 0x00, 0x00, 0x00, 0x22, 0xff, 0xff, 0xff, 0xf7, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x00, 0xf4, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x93, 0xff, 0xff, 0xff, 0xff, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x00, 0x23, 0xff, 0xff, 0xff, 0xfd, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x00, 0x23, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0xda, 0xff, 0xff, 0xc2, 0xff, 0xff, 0xce, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf6, 0xe1, 0xff, 0xff, 0xfd, 0x3a, 0xf4, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x8a, 0xff, 0xff, 0xff, 0xff, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x00, 0x23, 0xff, 0xff, 0xff, 0xfd, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x00, 0x23, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x9c, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x46, 0xff, 0xff, 0xff, 0xd9, 0xf8, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x81, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x2c, 0xff, 0xff, 0xff, 0xf7, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x39, 0x00, 0x00, 0x00, 0x00, 0x2d, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x5e, 0xff, 0xff, 0xff, 0xff, 0xff, 0x54, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x9b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x77, 0xff, 0xff, 0xff, 0xff, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe9, 0xff, 0xff, 0xff, 0x71, 0x00, 0x00, 0x00, 0x00, 0x64, 0xff, 0xff, 0xff, 0xe8, 0x00, 0xe9, 0xff, 0xff, 0xff, 0x70, 0x00, 0x00, 0x00, 0x00, 0x65, 0xff, 0xff, 0xff, 0xe9, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xe9, 0xff, 0xff, 0xff, 0x22, 0x00, 0x00, 0x00, 0x00, 0x22, 0xff, 0xff, 0xff, 0xe9, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x0e, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x6e, 0xff, 0xff, 0xff, 0xff, 0xa2, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0xd9, 0xff, 0xff, 0xff, 0xfa, 0x92, 0x56, 0x55, 0x8e, 0xf8, 0xff, 0xff, 0xff, 0xd8, 0x00, 0xda, 0xff, 0xff, 0xff, 0xfa, 0x92, 0x56, 0x55, 0x8e, 0xf8, 0xff, 0xff, 0xff, 0xda, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x00, 0xe2, 0xff, 0xff, 0xff, 0xda, 0x00, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xda, 0xff, 0xff, 0xff, 0xc7, 0x3e, 0x0f, 0x10, 0x40, 0xc8, 0xff, 0xff, 0xff, 0xda, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x9b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0x00, 0x9c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x00, 0xa4, 0xff, 0xff, 0xff, 0x9e, 0x00, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x9c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9c, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0e, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x0d, 0x00, 0x0e, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x0e, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x00, 0x66, 0xff, 0xff, 0xff, 0x61, 0x00, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0e, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb8, 0x0e, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0xe4, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x42, 0x95, 0xbc, 0xd7, 0xf2, 0xf1, 0xd5, 0xba, 0x95, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x95, 0xbc, 0xd7, 0xf2, 0xf1, 0xd5, 0xba, 0x95, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5f, 0x00, 0x28, 0xff, 0xff, 0xff, 0x24, 0x00, 0x60, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x42, 0x95, 0xbc, 0xd7, 0xf2, 0xf1, 0xd6, 0xba, 0x95, 0x43, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x4a, 0xff, 0xff, 0xff, 0xff, 
};

const lv_image_dsc_t zoom_log = {
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.w = 112,
  .header.h = 14,
  .data_size = 1568 * 3,
  .data = zoom_log_map,
};
