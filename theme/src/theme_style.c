#include "../inc/theme_style.h"

static lv_style_t style_backlight_bar;

void theme_style_init(void) {
    lv_style_init(&style_backlight_bar);
    lv_style_set_bg_color(&style_backlight_bar, lv_color_hex(0xd0d0d0));

}

lv_style_t *theme_style_get_backlight_bar() {
    return &style_backlight_bar;
}
