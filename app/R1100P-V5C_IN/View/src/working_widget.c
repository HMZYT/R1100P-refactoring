#include "../inc/working_widget.h"
#include "../inc/working_header.h"
#include "../inc/working_footer.h"

lv_obj_t* working_widget_init()
{
    //主窗口
    lv_obj_t *widget = lv_obj_create(lv_screen_active());

    uint16_t parent_width, parent_height;
    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);
    static lv_style_t main_style;
    static lv_style_t main_style1;

    lv_style_init(&main_style);
    lv_style_set_bg_color(&main_style, lv_color_make(255, 255, 0));
    lv_style_set_bg_opa(&main_style, LV_OPA_COVER);
    lv_style_set_radius(&main_style,0);
    lv_style_set_pad_all(&main_style,0);

    lv_style_init(&main_style1);
    lv_style_set_bg_color(&main_style1, lv_color_make(255, 0, 0));
    lv_style_set_bg_opa(&main_style1, LV_OPA_COVER);
    lv_style_set_radius(&main_style1,0);
    lv_style_set_pad_all(&main_style1,0);

    lv_obj_set_size(widget, parent_width, parent_height);
    lv_obj_set_pos(widget, 0, 0);
    lv_obj_add_style(widget ,&main_style, 0);
    lv_obj_remove_flag(widget, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *temp1= lv_obj_create(widget);
    lv_obj_set_size(temp1, 200, 100);
    lv_obj_set_pos(temp1, 0, 380);
    lv_obj_add_style(temp1 ,&main_style1, 0);
    //页头
    irc_lcd_header_t *header = working_header_create(widget);

    //页尾
    irc_lcd_footer_t *footer = working_footer_create(widget);

    return widget;
}

lv_obj_t * idle_widget_init()
{
    //主窗口
    lv_obj_t *widget= lv_obj_create(lv_screen_active());;
    uint16_t parent_width, parent_height;


    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);
    static lv_style_t main_style;

    lv_style_init(&main_style);
    lv_style_set_bg_color(&main_style, lv_color_make(255, 0, 0));
    lv_style_set_bg_opa(&main_style, LV_OPA_COVER);
    lv_style_set_radius(&main_style,0);
    lv_style_set_pad_all(&main_style,0);

    lv_obj_set_size(widget, parent_width, parent_height);
    lv_obj_set_pos(widget, 0, 0);
    lv_obj_add_style(widget, &main_style, 0);
    lv_obj_remove_flag(widget, LV_OBJ_FLAG_SCROLLABLE);



    return widget;
}