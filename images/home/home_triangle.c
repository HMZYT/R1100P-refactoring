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

#ifndef LV_ATTRIBUTE_IMAGE_HOME_TRIANGLE
#define LV_ATTRIBUTE_IMAGE_HOME_TRIANGLE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMAGE_HOME_TRIANGLE uint8_t home_triangle_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcb, 0x5a, 0xcb, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0x62, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xec, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0x62, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xec, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xec, 0x62, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xec, 0x62, 0x00, 0x00, 
  0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 
  0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0xab, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xf9, 0xf9, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xe6, 0xff, 0xff, 0xe6, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x66, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x66, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x39, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x39, 0x00, 0x00, 
  0x00, 0x19, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x19, 0x00, 
  0x06, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x06, 
  0x99, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x99, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_image_dsc_t home_triangle = {
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.w = 24,
  .header.h = 24,
  .data_size = 576 * 3,
  .data = home_triangle_map,
};
