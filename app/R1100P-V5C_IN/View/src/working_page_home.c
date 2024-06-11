#include <stdio.h>
#include "../inc/working_page_home.h"

#include "../../../../extensions/data-types/inc/dt_r1100p_ui_data.h"
#include "../inc/UiSubjectsWrapper.h"
#include "../inc/images_v4_0.h"
#include "../../res/fonts/language_control.h"
#include "../inc/sysparas_defs.h"
#include "../inc/UiRun.h"

static void home_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);
temp_value_t lv_subject_get_int_from_type(lv_subject_t * subject, int32_t index, int32_t idx,page_idx type_enum);
static int32_t cal_angel(int32_t data);
static lv_style_t style_oil_bar;
static lv_style_t style_uera_bar;
static lv_style_t style_uera_bar_blue;
static lv_style_t style_uera_bar_green;
static lv_style_t style8;

lv_obj_t* working_page_home_init(lv_obj_t *page)
{
    working_page_home_t *p = lv_malloc(sizeof (working_page_home_t));
    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    static lv_style_t bg_style;
    lv_style_init(&bg_style);
    lv_style_set_bg_color(&bg_style, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_border_width(&bg_style, 2);
    lv_style_set_border_color(&bg_style, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&bg_style, LV_OPA_COVER);
    lv_style_set_radius(&bg_style,0);
    lv_style_set_pad_all(&bg_style,0);

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 40 - 40);
    lv_obj_set_pos(obj, 0, 40);
    lv_obj_add_style(obj, &bg_style, 0);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_bg_color(&style, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_bg_opa(&style, LV_OPA_COVER);
    lv_style_set_border_width(&style, 2);
    lv_style_set_border_color(&style, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_radius(&style,0);
    lv_style_set_pad_all(&style,0);

    static lv_style_t style1;
    lv_style_init(&style1);
    lv_style_set_text_color(&style1, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_text_font(&style1, &working_mode_20px);
    lv_style_set_border_width(&style1, 2);
    lv_style_set_border_opa(&style1, LV_OPA_COVER);
    lv_style_set_border_color(&style1, lv_color_make(0x97, 0x97, 0x97));
    lv_style_set_border_side(&style1, LV_BORDER_SIDE_FULL);
    lv_style_set_bg_color(&style1, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_bg_opa(&style1, LV_OPA_COVER);
    lv_style_set_text_align(&style1, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style1,0);
    lv_style_set_pad_all(&style1,0);

    static lv_style_t style_working_mode;
    lv_style_init(&style_working_mode);
    lv_style_set_border_side(&style_working_mode, LV_BORDER_SIDE_NONE);
    lv_style_set_radius(&style_working_mode, 10);
    lv_style_set_bg_color(&style_working_mode, lv_color_make(0x33, 0x33, 0x33));
    lv_style_set_bg_opa(&style_working_mode, LV_OPA_COVER);
    lv_style_set_radius(&style_working_mode,0);
    lv_style_set_pad_all(&style_working_mode,0);

    static lv_style_t style2;
    lv_style_init(&style2);
    lv_style_set_text_color(&style2, lv_color_black());
    lv_style_set_text_font(&style2, &working_mode_20px);
    lv_style_set_text_align(&style2, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style2,0);
    lv_style_set_pad_all(&style2,0);

    static lv_style_t style02;
    lv_style_init(&style02);
    lv_style_set_text_color(&style02, lv_color_black());
    lv_style_set_text_font(&style02, &working_mode_20px);
    lv_style_set_text_align(&style02, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style02,0);
    lv_style_set_pad_all(&style02,0);

    static lv_style_t style03;
    lv_style_init(&style03);
    lv_style_set_text_color(&style03, lv_color_black());
    lv_style_set_text_font(&style03, &working_mode_20px);
    lv_style_set_text_align(&style03, LV_TEXT_ALIGN_RIGHT);
    lv_style_set_radius(&style03,0);
    lv_style_set_pad_all(&style03,0);

    static lv_style_t style003;
    lv_style_init(&style003);
    lv_style_set_text_color(&style003, lv_color_black());
    lv_style_set_text_font(&style003, &working_mode_20px);
    lv_style_set_text_align(&style003, LV_TEXT_ALIGN_LEFT);
    lv_style_set_radius(&style003,0);
    lv_style_set_pad_all(&style003,0);

    static lv_style_t speed_style;
    lv_style_init(&speed_style);
    lv_style_set_text_color(&speed_style, lv_color_black());
    lv_style_set_text_font(&speed_style, &working_mode_24px);
    lv_style_set_text_align(&speed_style, LV_TEXT_ALIGN_CENTER);
    lv_style_set_bg_color(&speed_style, lv_color_make(0x33, 0x33, 0x33));
    lv_style_set_radius(&speed_style,0);
    lv_style_set_pad_all(&speed_style,0);

    static lv_style_t style_green;
    lv_style_init(&style_green);
    lv_style_set_text_color(&style_green, lv_color_make(0x80, 0xEF, 0x00));
    lv_style_set_text_font(&style_green, &working_mode_20px);
    lv_style_set_text_align(&style_green, LV_TEXT_ALIGN_RIGHT);
    lv_style_set_radius(&style_green,0);
    lv_style_set_pad_all(&style_green,0);

    static lv_style_t style3;
    lv_style_init(&style3);
    lv_style_set_border_width(&style3, 1);
    lv_style_set_border_opa(&style3, LV_OPA_COVER);
    lv_style_set_border_color(&style3, lv_color_make(0x66, 0x66, 0x66));
    lv_style_set_border_side(&style3, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_LEFT);
    lv_style_set_bg_color(&style3, lv_color_make(0x33, 0x33, 0x33));
    lv_style_set_radius(&style3,0);
    lv_style_set_pad_all(&style3,0);

    static lv_style_t style4;
    lv_style_init(&style4);
    lv_style_set_border_width(&style4, 1);
    lv_style_set_border_opa(&style4, LV_OPA_COVER);
    lv_style_set_border_color(&style4, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_border_side(&style4, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_RIGHT);
    lv_style_set_bg_color(&style4, lv_color_make(0x33, 0x33, 0x33));
    lv_style_set_radius(&style4,0);
    lv_style_set_pad_all(&style4,0);

    static lv_style_t style5;
    lv_style_init(&style5);
    lv_style_set_text_color(&style5, lv_color_make(0xFF, 0xE1, 0x00));
    lv_style_set_text_font(&style5, &working_mode_28px);
    lv_style_set_text_align(&style5, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style5,0);
    lv_style_set_pad_all(&style5,0);

    static lv_style_t style6;
    lv_style_init(&style6);
    lv_style_set_text_color(&style6, lv_color_make(0x04, 0x9f, 0x00));
    lv_style_set_text_font(&style6, &working_mode_28px);
    lv_style_set_radius(&style6,0);
    lv_style_set_pad_all(&style6,0);

    static lv_style_t style7;
    lv_style_init(&style7);
    lv_style_set_text_align(&style7, LV_TEXT_ALIGN_CENTER);
    lv_style_set_text_color(&style7, lv_color_make(0x04, 0x9f, 0x00));
    lv_style_set_text_font(&style7, &working_mode_20px);
    lv_style_set_border_color(&style7, lv_color_make(0x04, 0x9f, 0x00));
    lv_style_set_border_opa(&style7, LV_OPA_COVER);
    lv_style_set_border_side(&style7, LV_BORDER_SIDE_FULL);
    lv_style_set_border_width(&style7, 1);
    lv_style_set_radius(&style7,0);
    lv_style_set_pad_all(&style7,0);

    lv_style_init(&style8);
    lv_style_set_text_color(&style8, lv_color_make(0x04, 0x9f, 0x00));
    lv_style_set_text_font(&style8, &working_mode_20px);
    lv_style_set_text_align(&style8, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style8,0);
    lv_style_set_pad_all(&style8,0);

    static lv_style_t style9;
    lv_style_init(&style9);
    lv_style_set_text_color(&style9, lv_color_make(0x00, 0x00, 0xff));
    lv_style_set_text_font(&style9, &working_mode_20px);
    lv_style_set_text_align(&style9, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style9,0);
    lv_style_set_pad_all(&style9,0);

    static lv_style_t style10;
    lv_style_init(&style10);
    lv_style_set_border_width(&style10, 1);
    lv_style_set_border_opa(&style10, LV_OPA_COVER);
    lv_style_set_border_color(&style10, lv_color_make(0, 0xFF, 0));
    lv_style_set_border_side(&style10, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style10,0);
    lv_style_set_pad_all(&style10,0);

    static lv_style_t style11;
    lv_style_init(&style11);
    lv_style_set_text_color(&style11, lv_color_make(0x04, 0x9F, 0x00));
    lv_style_set_text_font(&style11, &working_mode_20px);
    lv_style_set_text_align(&style11, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style11,0);
    lv_style_set_pad_all(&style11,0);

    lv_style_init(&style_oil_bar);
    lv_style_set_border_width(&style_oil_bar, 0);
    lv_style_set_bg_color(&style_oil_bar, lv_color_make(0, 0xFF, 0));
    lv_style_set_bg_opa(&style_oil_bar, LV_OPA_COVER);
    lv_style_set_radius(&style_oil_bar,0);
    lv_style_set_pad_all(&style_oil_bar,0);

    lv_style_init(&style_uera_bar);
    lv_style_set_border_width(&style_uera_bar, 0);
    lv_style_set_bg_color(&style_uera_bar, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&style_uera_bar, LV_OPA_COVER);
    lv_style_set_radius(&style_uera_bar,0);
    lv_style_set_pad_all(&style_uera_bar,0);

    lv_style_init(&style_uera_bar_blue);
    lv_style_set_border_width(&style_uera_bar_blue, 0);
    lv_style_set_bg_color(&style_uera_bar_blue, lv_color_make(0x00, 0x00, 0xff));
    lv_style_set_bg_opa(&style_uera_bar_blue, LV_OPA_COVER);
    lv_style_set_radius(&style_uera_bar_blue,0);
    lv_style_set_pad_all(&style_uera_bar_blue,0);

    lv_style_init(&style_uera_bar_green);
    lv_style_set_border_width(&style_uera_bar_green, 0);
    lv_style_set_bg_color(&style_uera_bar_green, lv_color_make(0x04, 0x9F, 0x00));
    lv_style_set_bg_opa(&style_uera_bar_green, LV_OPA_COVER);
    lv_style_set_radius(&style_uera_bar_green,0);
    lv_style_set_pad_all(&style_uera_bar_green,0);

    lv_obj_t *g1 = lv_obj_create(obj);
    lv_obj_t *g2 = lv_obj_create(obj);
    lv_obj_t *g3 = lv_obj_create(obj);
    lv_obj_remove_flag(g3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_size(g1, 250, 370);
    lv_obj_set_size(g2, 250, 370);
    lv_obj_set_size(g3, 250, 370);

    lv_obj_set_pos(g1, 12, 55 - 40);
    lv_obj_set_pos(g2, 272, 55 - 40);
    lv_obj_set_pos(g3, 532, 55 - 40);

    lv_obj_add_style(g1, &style, 0);
    lv_obj_add_style(g2, &style, 0);
    lv_obj_add_style(g3, &style, 0);

    static lv_style_t style00;
    lv_style_init(&style00);
    lv_style_set_bg_color(&style00, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&style00, LV_OPA_COVER);
    lv_style_set_border_width(&style00, 2);
    lv_style_set_border_color(&style00, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_radius(&style00,0);
    lv_style_set_pad_all(&style00,0);

    // 1.
    //-----------------------------------------------------------------

    // 发动机转速背景图
    lv_obj_t *engine_rpm_img = lv_img_create(g1);
    lv_img_set_src(engine_rpm_img, &home_rpm);
    lv_obj_set_pos(engine_rpm_img, 45, 28);

    // 发动机转速指针
    p->engine_speed_pointer = lv_img_create(g1);
    lv_img_set_src(p->engine_speed_pointer, &home_pin);
    lv_img_set_angle(p->engine_speed_pointer, 0);
    lv_img_set_pivot(p->engine_speed_pointer, 163 / 2, 163 / 2);
    lv_obj_set_pos(p->engine_speed_pointer, 45, 30);

    p->engine_speed_label = lv_label_create(g1);
    lv_obj_add_style(p->engine_speed_label, &style1, 0);
    lv_obj_set_pos(p->engine_speed_label, 15 + 76, 96);
    lv_obj_set_size(p->engine_speed_label, 69, 28);

    lv_label_set_text(p->engine_speed_label, "0");

    // 速度箭头上
    p->speed_up = lv_img_create(g1);
    lv_img_set_src(p->speed_up, &up_arrow);
    lv_obj_set_pos(p->speed_up, 15, 20);

    // 速度箭头下
    p->speed_down = lv_img_create(g1);
    lv_img_set_src(p->speed_down, &down_arrow);
    lv_obj_set_pos(p->speed_down, 212, 20);

    // 速度图标
    lv_obj_t *tmp_img;
    tmp_img = lv_img_create(g1);
    lv_img_set_src(tmp_img, &motor_speed);
    lv_obj_set_pos(tmp_img, 10, 85);
    lv_img_set_zoom(tmp_img, 320);

    // 当前档位
    tmp_img = lv_img_create(g1);
    lv_img_set_src(tmp_img, &current_level);
    lv_obj_set_pos(tmp_img, 15, 165);
    lv_img_set_zoom(tmp_img, 380);

    p->local_level_label = lv_label_create(g1);
    lv_obj_set_pos(p->local_level_label, 60, 170 + 5);
    lv_obj_add_style(p->local_level_label, &style02, 0);
    lv_label_set_text(p->local_level_label, "0");

    // 建议档位->水冷
    tmp_img = lv_img_create(g1);
    lv_img_set_src(tmp_img, &watercold);
    lv_obj_set_pos(tmp_img, 100, 165);
    // lv_img_set_zoom(tmp_img, 380);

    p->sug_level_label = lv_label_create(g1);
    lv_obj_set_pos(p->sug_level_label, 90 + 55, 170 + 5);
    lv_obj_add_style(p->sug_level_label, &style02, 0);
    lv_label_set_text(p->sug_level_label, "0.0");

    // ECO
    p->eco_img = lv_img_create(g1);
    lv_img_set_src(p->eco_img, &jieneng);
    lv_obj_set_pos(p->eco_img, 90 + 45 + 55 + 7, 160);
    lv_img_set_zoom(p->eco_img, 255);

    // Adblue
    tmp_img = lv_label_create(g1);
    lv_label_set_text(tmp_img, "E");
    lv_obj_set_pos(tmp_img, 30, 240);
    lv_obj_add_style(tmp_img, &style02, 0);

    tmp_img = lv_label_create(g1);
    lv_label_set_text(tmp_img, "F");
    lv_obj_set_pos(tmp_img, 200, 240);
    lv_obj_add_style(tmp_img, &style02, 0);

    tmp_img = lv_img_create(g1);
    lv_img_set_src(tmp_img, &adblue);
    lv_obj_set_pos(tmp_img, 100, 230);
    lv_img_set_zoom(tmp_img, 320);

    for (int i = 0; i < 10; ++i)
    {
        p->uera_rect[i] = lv_obj_create(g1);
        lv_obj_set_size(p->uera_rect[i], 20, 9);
        lv_obj_set_pos(p->uera_rect[i], 15 + i * 22, 270);
        lv_obj_add_style(p->uera_rect[i], &style_uera_bar_blue, 0);
    }

    p->uera_pos = lv_label_create(g1);
    lv_obj_add_style(p->uera_pos, &style9, 0);
    lv_obj_set_pos(p->uera_pos, 140, 240);
    lv_label_set_text(p->uera_pos, "0%");

    // oil
    tmp_img = lv_label_create(g1);
    lv_label_set_text(tmp_img, "E");
    lv_obj_set_pos(tmp_img, 30, 240 + 80 - 10);
    lv_obj_add_style(tmp_img, &style02, 0);

    tmp_img = lv_label_create(g1);
    lv_label_set_text(tmp_img, "F");
    lv_obj_set_pos(tmp_img, 200, 240 + 80 - 10);
    lv_obj_add_style(tmp_img, &style02, 0);

    tmp_img = lv_img_create(g1);
    lv_img_set_src(tmp_img, &oil_pos);
    lv_obj_set_pos(tmp_img, 100, 230 + 80 - 10);
    lv_img_set_zoom(tmp_img, 250);

    for (int i = 0; i < 10; ++i)
    {
        p->oil_rect[i] = lv_obj_create(g1);
        lv_obj_set_size(p->oil_rect[i], 20, 9);
        lv_obj_set_pos(p->oil_rect[i], 15 + i * 22, 270 + 80 - 10);
        lv_obj_add_style(p->oil_rect[i], &style_uera_bar_green, 0);
    }

    p->oil_pos = lv_label_create(g1);
    lv_obj_add_style(p->oil_pos, &style11, 0);
    lv_obj_set_pos(p->oil_pos, 140, 240 + 80 - 10);
    lv_label_set_text(p->oil_pos, "0%");

    // 2.
    //-----------------------------------------------------------------

    // 压力背景图
    lv_obj_t *engine_mpa_img = lv_img_create(g2);
    lv_img_set_src(engine_mpa_img, &home_mpa);
    lv_obj_set_pos(engine_mpa_img, 55, 28);

    // 压力指针
    p->pump_press_pointer = lv_img_create(g2);
    lv_img_set_src(p->pump_press_pointer, &home_pin);
    lv_img_set_angle(p->pump_press_pointer, 0);
    lv_img_set_pivot(p->pump_press_pointer, 163 / 2, 163 / 2);
    lv_obj_set_pos(p->pump_press_pointer, 55, 30);

    p->pump_press_label = lv_label_create(g2);
    lv_obj_set_pos(p->pump_press_label, 15 + 86, 96);
    lv_obj_set_size(p->pump_press_label, 69, 28);
    lv_obj_add_style(p->pump_press_label, &style1, 0);
    lv_label_set_text(p->pump_press_label, "0.0");

    // 压力图标
    tmp_img = lv_img_create(g2);
    lv_img_set_src(tmp_img, &bump_press0);
    lv_obj_set_pos(tmp_img, 8, 80);

    // 打泵方向
    p->pump_pos_neg = lv_img_create(g2);
    lv_img_set_src(p->pump_pos_neg, &bump_stop);
    lv_obj_set_pos(p->pump_pos_neg, 15, 165 - 10);
    // lv_img_set_zoom(p->pump_pos_neg, 380);

    p->bump_direction_label = lv_label_create(g2);
    lv_obj_set_pos(p->bump_direction_label, 80, 170 + 5);
    lv_obj_add_style(p->bump_direction_label, &style02, 0);
    //lv_label_set_text(p->bump_direction_label, "0次/min");
    language_lv_label_set_text(p->bump_direction_label, "label_01");

    p->icon_materials = lv_img_create(g2);
    lv_img_set_src(p->icon_materials, &liao_none);
    lv_obj_set_pos(p->icon_materials, 15, 156);
    // lv_img_set_zoom(p->icon_materials, 280);
    lv_obj_add_flag(p->icon_materials, LV_OBJ_FLAG_HIDDEN);

    // 料矿
    p->icon_materials_label = lv_label_create(g2);
    lv_obj_set_pos(p->icon_materials_label, 90, 170 + 40);
    lv_obj_add_style(p->icon_materials_label, &style02, 0);
    //lv_label_set_text(p->icon_materials_label, "料况一般");
    language_lv_label_set_text(p->icon_materials_label, "label_17");
    lv_obj_add_flag(p->icon_materials_label, LV_OBJ_FLAG_HIDDEN);

    p->direction_err = lv_img_create(g2);
    lv_img_set_src(p->direction_err, &err);
    lv_obj_set_pos(p->direction_err, 58 - 6, 155 + 38 - 13);
    lv_img_set_zoom(p->direction_err, 180);
    lv_obj_add_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);

    // 泵油温
    tmp_img = lv_img_create(g2);
    lv_img_set_src(tmp_img, &bump_oil);
    lv_obj_set_pos(tmp_img, 15 + 8, 240 - 6);
    lv_img_set_zoom(tmp_img, 220);

    p->bump_oil_tep = lv_label_create(g2);
    lv_obj_set_pos(p->bump_oil_tep, 80, 260 - 11);
    lv_obj_add_style(p->bump_oil_tep, &style02, 0);
    lv_label_set_text(p->bump_oil_tep, "0.0℃");

    // 堵管
    p->duguan = lv_img_create(g2);
    lv_img_set_src(p->duguan, &duguan);
    lv_obj_set_pos(p->duguan, 170, 260 - 8);
    lv_img_set_zoom(p->duguan, 320);
    lv_obj_add_flag(p->duguan, LV_OBJ_FLAG_HIDDEN);

    // 高低压
    p->press_status = lv_img_create(g2);
    lv_img_set_src(p->press_status, &highpress);
    lv_obj_set_pos(p->press_status, 15 + 8, 300 + 10);
    lv_img_set_zoom(p->press_status, 240);

    // 风机
    p->wind_status = lv_img_create(g2);
    lv_img_set_src(p->wind_status, &fan0);
    lv_obj_set_pos(p->wind_status, 72 + 30, 300 + 6);
    lv_img_set_zoom(p->wind_status, 240);

    p->wind_status_emr = lv_img_create(g2);
    lv_img_set_src(p->wind_status_emr, &err);
    lv_obj_set_pos(p->wind_status_emr, 100 + 30, 320 + 6);
    lv_img_set_zoom(p->wind_status_emr, 180);
    lv_obj_add_flag(p->wind_status_emr, LV_OBJ_FLAG_HIDDEN);

    // 搅拌
    p->jiaoban_status = lv_img_create(g2);
    lv_img_set_src(p->jiaoban_status, &jiaoban_2);
    lv_obj_set_pos(p->jiaoban_status, 160 + 14, 300 + 7);
    lv_img_set_zoom(p->jiaoban_status, 230);

    p->jiaoban_status_emr = lv_img_create(g2);
    lv_img_set_src(p->jiaoban_status_emr, &err);
    lv_obj_set_pos(p->jiaoban_status_emr, 200 + 14, 320 + 6);
    lv_img_set_zoom(p->jiaoban_status_emr, 180);
    lv_obj_add_flag(p->jiaoban_status_emr, LV_OBJ_FLAG_HIDDEN);

    // 3.
    //-----------------------------------------------------------------
    // 锁定臂状态
    tmp_img = lv_img_create(g3);
    lv_img_set_src(tmp_img, &car);
    lv_obj_set_pos(tmp_img, 0 - 17, 0 - 37);
    lv_img_set_zoom(tmp_img, 150);

    int i;
    for (i = 0; i < 5; i++)
    {
        p->arms_up_lock[i] = lv_img_create(g3);
        lv_img_set_src(p->arms_up_lock[i], &xx_icon);
        lv_img_set_zoom(p->arms_up_lock[i], 200);
        lv_obj_add_flag(p->arms_up_lock[i], LV_OBJ_FLAG_HIDDEN);

        p->arms_down_lock[i] = lv_img_create(g3);
        lv_img_set_src(p->arms_down_lock[i], &xx_icon);
        lv_img_set_zoom(p->arms_down_lock[i], 200);
        lv_obj_add_flag(p->arms_down_lock[i], LV_OBJ_FLAG_HIDDEN);

        p->arms_angel[i] = lv_label_create(g3);
        lv_obj_add_style(p->arms_angel[i], &style003, 0);
        lv_obj_set_size(p->arms_angel[i], 90, 30);
        lv_label_set_text(p->arms_angel[i], "0°");
    }

    lv_obj_set_pos(p->arms_up_lock[0], 24, 160);
    lv_obj_set_pos(p->arms_up_lock[1], 38, 110);
    lv_obj_set_pos(p->arms_up_lock[2], 53, 65);
    lv_obj_set_pos(p->arms_up_lock[3], 98, 20);
    lv_obj_set_pos(p->arms_up_lock[4], 145 + 6, 12 + 7);

    lv_obj_set_pos(p->arms_down_lock[0], 55, 160);
    lv_obj_set_pos(p->arms_down_lock[1], 72, 110);
    lv_obj_set_pos(p->arms_down_lock[2], 88, 65);
    lv_obj_set_pos(p->arms_down_lock[3], 110, 45);
    lv_obj_set_pos(p->arms_down_lock[4], 140, 49);

    lv_obj_add_style(p->arms_angel[3], &style03, 0);

    lv_obj_set_pos(p->arms_angel[0], 50, 190);
    lv_obj_set_pos(p->arms_angel[1], 70, 130 + 10);
    lv_obj_set_pos(p->arms_angel[2], 85, 80 + 10);
    lv_obj_set_pos(p->arms_angel[3], 105 - 110, 40);
    lv_obj_set_pos(p->arms_angel[4], 120, 10);

    // lock
    p->lock_img = lv_img_create(g3);
    lv_img_set_src(p->lock_img, &mima_3);
    lv_obj_set_pos(p->lock_img, 120 - 35 + 10, 200 - 30);
    lv_obj_add_flag(p->lock_img, LV_OBJ_FLAG_HIDDEN);

    // 危险标志
    p->danger = lv_img_create(g3);
    lv_img_set_src(p->danger, &danger0);
    lv_obj_set_pos(p->danger, 145, 235 - 20);
    lv_img_set_zoom(p->danger, 240);
    lv_obj_add_flag(p->danger, LV_OBJ_FLAG_HIDDEN);

    p->danger_icon = lv_img_create(g3);
    lv_img_set_src(p->danger_icon, &mode_icon0);
    lv_obj_set_pos(p->danger_icon, 60 + 145, 235 - 20);
    lv_img_set_zoom(p->danger_icon, 240);
    lv_obj_add_flag(p->danger_icon, LV_OBJ_FLAG_HIDDEN);

    // 支撑模式
    p->truck = lv_img_create(g3);
    lv_img_set_src(p->truck, &no_mode);
    lv_obj_set_pos(p->truck, 0 - 70 + 145, 210);
    lv_img_set_zoom(p->truck, 160);

    // 色块
    p->safety_bg = lv_obj_create(g3);
    lv_obj_set_size(p->safety_bg, 35, 80);
    lv_obj_set_pos(p->safety_bg, 65 + 145, 275);
    lv_obj_add_style(p->safety_bg, &style00, 0);

    // 绿色
    p->green_obj = lv_obj_create(g3);
    lv_obj_set_size(p->green_obj, 35, 52);
    lv_obj_set_pos(p->green_obj, 65 + 145, 275);
    lv_obj_add_style(p->green_obj, &style00, 0);
    lv_obj_set_style_bg_color(p->green_obj, lv_color_make(0x00, 0xff, 0x00), 0);
    lv_obj_set_style_border_color(p->green_obj, lv_color_make(0x00, 0xff, 0x00), 0);
    lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);

    // 黄色
    p->yellow_obj = lv_obj_create(g3);
    lv_obj_set_size(p->yellow_obj, 35, 20);
    lv_obj_set_pos(p->yellow_obj, 65 + 145, 52 + 275);
    lv_obj_add_style(p->yellow_obj, &style00, 0);
    lv_obj_set_style_bg_color(p->yellow_obj, lv_color_make(0xff, 0xff, 0x00), 0);
    lv_obj_set_style_border_color(p->yellow_obj, lv_color_make(0xff, 0xff, 0x00), 0);
    lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);

    // 红色
    p->red_obj = lv_obj_create(g3);
    lv_obj_set_size(p->red_obj, 35, 8);
    lv_obj_set_pos(p->red_obj, 65 + 145, 20 + 52 + 275);
    lv_obj_add_style(p->red_obj, &style00, 0);
    lv_obj_set_style_bg_color(p->red_obj, lv_color_make(0xff, 0x00, 0x00), 0);
    lv_obj_set_style_border_color(p->red_obj, lv_color_make(0xff, 0x00, 0x00), 0);
    lv_obj_add_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);

    // 回转
    tmp_img = lv_img_create(g3);
    lv_img_set_src(tmp_img, &cycle_angel);
    lv_obj_set_pos(tmp_img, 70 + 5 - 90, 280);
    lv_img_set_zoom(tmp_img, 150);

    p->cycle_angel_label = lv_label_create(g3);
    lv_obj_set_pos(p->cycle_angel_label, 170 - 90 - 15, 320 + 6);
    lv_obj_add_style(p->cycle_angel_label, &style02, 0);
    lv_label_set_text(p->cycle_angel_label, "0.0°");

    p->cycle_emr = lv_img_create(g3);
    lv_img_set_src(p->cycle_emr, &err);
    lv_obj_set_pos(p->cycle_emr, 130 + 5 - 90, 340 - 4);
    lv_img_set_zoom(p->cycle_emr, 180);
    lv_obj_add_flag(p->cycle_emr, LV_OBJ_FLAG_HIDDEN);

    // 臂架油温
    tmp_img = lv_img_create(g3);
    lv_img_set_src(tmp_img, &arm_oil);
    lv_obj_set_pos(tmp_img, 105 - 90, 260);
    lv_img_set_zoom(tmp_img, 230);

    p->arm_oil_label = lv_label_create(g3);
    lv_obj_set_pos(p->arm_oil_label, 170 - 90 - 15, 265 + 6);
    lv_obj_add_style(p->arm_oil_label, &style02, 0);
    lv_label_set_text(p->arm_oil_label, "0.0℃");

    //观察者模式
    lv_subject_add_observer_obj(&subject_home_all, home_observer_list_cb, page, p);

    return obj;
}

static void home_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject) {
    lv_obj_t *page_home = lv_observer_get_target_obj(observer);
    working_page_home_t *p = (working_page_home_t *) observer->user_data;

    char temp[64];
    temp_value_t temp_v;
    temp_value_t temp_vv;
    temp_value_t temp_vvv;
    /*************************************************************************************
   * 一区：
   * - 发动机转速
   * - 瞬时油耗
   * - ECO，泵送节能状态
   * - 排量档位
   * - 推荐经济档位
   *************************************************************************************/

#pragma region

    //-----------------------------------------------------------------
    // 1. 发动机转速
    //-----------------------------------------------------------------
    temp_v = lv_subject_get_int_from_type(subject, machine_motor_speed, 0, pageid_home);
    if (temp_v.current_value > 2500)
    {
        temp_v.current_value  = 2500;
    }
    if(temp_v.different_flag)
    {
        snprintf(temp, 64, "%d", temp_v.current_value);
        lv_label_set_text(p->engine_speed_label, temp);
        lv_img_set_angle(p->engine_speed_pointer, temp_v.current_value * 1800.0 / 2500);
    }


    temp_v = lv_subject_get_int_from_type(subject, machine_acc_flag, 0, pageid_home);
    if (temp_v.different_flag)
    {
        if (temp_v.current_value)
        {
            lv_img_set_src(p->speed_up, &arrow01);
            lv_img_set_src(p->speed_down, &down_arrow);
        }
        else
        {
            lv_img_set_src(p->speed_up, &up_arrow);
            lv_img_set_src(p->speed_down, &down_arrow);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, machine_dec_flag, 0, pageid_home);
    if (temp_v.different_flag)
    {
        if (temp_v.current_value)
        {
            lv_img_set_src(p->speed_up, &up_arrow);
            lv_img_set_src(p->speed_down, &arrow02);
        }
        else
        {
            lv_img_set_src(p->speed_up, &up_arrow);
            lv_img_set_src(p->speed_down, &down_arrow);
        }
    }

    //-----------------------------------------------------------------
    // 2. 排量档位
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_dec_flag, 0, pageid_home);
    if(temp_v.different_flag)
    {
        sprintf(temp, "%.1f",temp_v.current_value / 10.0);
        lv_label_set_text(p->local_level_label, temp);
    }

    //-----------------------------------------------------------------
    // 3. 水冷
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_water_temp, 0, pageid_home);
    if(temp_v.different_flag)
    {
        sprintf(temp, "%d℃", temp_v.current_value -40);
        lv_label_set_text(p->sug_level_label, temp);
    }

    //-----------------------------------------------------------------
    // 4. 疏通强力节能
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_pump_mode, 0, pageid_home);
    if(temp_v.different_flag)
    {
        if (temp_v.current_value == 2 )
        { //疏通
            lv_img_set_src(p->eco_img, &shutong);
        }
        else if(temp_v.current_value == 1 )
        {//强力
            lv_img_set_src(p->eco_img, &qiangli);
        }
        else if(temp_v.current_value == 3  )
        {//节能
            lv_img_set_src(p->eco_img, &jieneng);
        }
    }

    //-----------------------------------------------------------------
    // 5. 油位
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_oil_pos, 0, pageid_home);
    if(temp_v.different_flag) {
        if ( temp_v.current_value > 100 )
        {
            lv_label_set_text_fmt( p->oil_pos, "--%%", temp_v.current_value );
        }
        else
        {
            lv_label_set_text_fmt( p->oil_pos, "%d%%", temp_v.current_value );
        }

        uint8_t nn =temp_v.current_value / 10 + (temp_v.current_value % 10 ? 1: 0);
        if ( nn > 10 )
        {
            nn = 10;
        }
        uint8_t mm =  nn;

        for ( int i = 0; i < mm; ++i )
        {
            lv_obj_remove_style( p->oil_rect[ i ],&style_uera_bar, 0 );
            lv_obj_add_style( p->oil_rect[ i ], &style_uera_bar_green, 0);
        }
        for ( int i = mm; i < 10; ++i )
        {
            lv_obj_remove_style( p->oil_rect[ i ],&style_uera_bar_green, 0 );
            lv_obj_add_style( p->oil_rect[ i ], &style_uera_bar, 0);
        }
    }

    //-----------------------------------------------------------------
    // 6. 尿素液位
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_urea_pos, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value > 100 )
        {
            lv_label_set_text_fmt( p->uera_pos, "--%%", temp_v.current_value );
        }
        else
        {
            lv_label_set_text_fmt( p->uera_pos, "%d%%", temp_v.current_value );
        }


        uint8_t n = temp_v.current_value / 10 + (temp_v.current_value % 10 ? 1: 0);
        if ( n > 10 )
        {
            n = 10;
        }
        uint8_t m =  n;

        for ( int j = 0; j < m; ++j )
        {
            lv_obj_remove_style( p->uera_rect[ j ],&style_uera_bar, 0 );
            lv_obj_add_style( p->uera_rect[ j ], &style_uera_bar_blue, 0);
        }
        for ( int j = m; j < 10; ++j )
        {
            lv_obj_remove_style( p->uera_rect[ j ],&style_uera_bar_blue, 0 );
            lv_obj_add_style( p->uera_rect[ j ], &style_uera_bar, 0);
        }
    }
    //-----------------------------------------------------------------
    // 7. 泵送压力
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_pumping_pressure, 0, pageid_home);
    if(temp_v.different_flag) {
        if ( temp_v.current_value > 600 )
        {
            temp_v.current_value = 600;
        }
        snprintf(temp, 64, "%.1f", temp_v.current_value / 10.0);
        lv_label_set_text(p->pump_press_label, temp);

        lv_img_set_angle(p->pump_press_pointer, temp_v.current_value / 10.0 * 1800.0 / 60);
    }
    //-----------------------------------------------------------------
    // 8. 正反泵
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_cw, 0,pageid_home);
    temp_vv = lv_subject_get_int_from_type(subject, machine_ccw, 0,pageid_home);
    if(temp_v.different_flag || temp_vv.different_flag) {
        if (temp_v.current_value)
        { //正泵
            lv_obj_clear_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src(p->pump_pos_neg, &bump_up );
        }
        else if (temp_vv.current_value)
        { //反泵
            lv_obj_clear_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src(p->pump_pos_neg, &bump_down);
        }
        else
        {
            //lv_obj_add_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src(p->pump_pos_neg, &bump_stop);
        }
    }
    if (temp_v.current_value == 0 && temp_vv.current_value == 0 ) //补充情况 （初始化值都为0，上面else跑不进）
    {
        //lv_obj_add_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
        lv_img_set_src(p->pump_pos_neg, &bump_stop);
    }

    temp_v =  lv_subject_get_int_from_type(subject, machine_emr, 0 ,pageid_home);
    if(temp_v.different_flag) {
        if ( temp_v.current_value == 0 )
        {//关闭
            lv_obj_add_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);
        }
        else if ( temp_v.current_value == 1 )
        {//左主缸
            lv_obj_clear_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);
        }
        else if ( temp_v.current_value == 2 )
        {//右主缸
            lv_obj_clear_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);
        }
        else if ( temp_v.current_value == 3 )
        {//水箱
            lv_obj_clear_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);
        }
        else if ( temp_v.current_value == 4 )
        {//无传感
            lv_obj_clear_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);
        }
        else{
            lv_obj_clear_flag(p->direction_err, LV_OBJ_FLAG_HIDDEN);
        }
    }

    //-----------------------------------------------------------------
    // 9. 物料状态
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_materials, 0, pageid_home);
    if(temp_v.different_flag) {
        if ( temp_v.current_value == 0 )
        {//不显示n
            lv_obj_clear_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src( p->icon_materials, &liao_none  );
        }else if ( temp_v.current_value == 1 ){//1：可泵性好
            //压力值不再闪烁，且颜色为绿色
            lv_obj_clear_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src( p->icon_materials, &liao_good  );
        }else if ( temp_v.current_value == 2 ){//2：可泵性一般
            //压力值不再闪烁，且颜色为绿色
            lv_obj_clear_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src( p->icon_materials, &liao_common );
        }else if ( temp_v.current_value == 3 ){//3：可泵性差
            //料况差时，图标为红色，压力值为红色，图标以及压力值以1s频率闪烁
            lv_obj_clear_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
            lv_img_set_src( p->icon_materials, &liao_err );
        }else{
            //lv_obj_add_flag( p->icon_materials, LV_OBJ_FLAG_HIDDEN );
        }
    }
    //-----------------------------------------------------------------
    // 10. 泵送频率
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_pump_freq, 0, pageid_home);
    if(temp_v.different_flag) {
        snprintf(temp, 64, "%d次/min",temp_v.current_value );
        lv_label_set_text(p->bump_direction_label, temp);
    }
    //-----------------------------------------------------------------
    // 11. 泵送油温
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_pump_temperature, 0, pageid_home);
    if(temp_v.different_flag) {
        sprintf(temp, "%.1f℃", temp_v.current_value / 10.0);
        lv_label_set_text(p->bump_oil_tep, temp);
    }

    //-----------------------------------------------------------------
    // 12. 堵管报警
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_blocking, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value  >= 2 )
        {
            lv_obj_clear_flag( p->duguan, LV_OBJ_FLAG_HIDDEN );
        }
        else
        {
            lv_obj_add_flag( p->duguan, LV_OBJ_FLAG_HIDDEN );
        }
    }
    //-----------------------------------------------------------------
    // 13. 高低压
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_pressure, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value)
        { //高压
            lv_obj_clear_flag(p->press_status, LV_OBJ_FLAG_HIDDEN);
            lv_img_set_src(p->press_status, &highpress);
        }
        else
        { //低压
            lv_obj_clear_flag(p->press_status, LV_OBJ_FLAG_HIDDEN);
            lv_img_set_src(p->press_status, &lowpress);
        }
    }

    //-----------------------------------------------------------------
    // 14.风机
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_fan_manual, 0, pageid_home);
    temp_vv =  lv_subject_get_int_from_type(subject, machine_fan_auto, 0, pageid_home);
    temp_vvv =  lv_subject_get_int_from_type(subject, machine_fan_close, 0, pageid_home);
    if(temp_v.different_flag || temp_vv.different_flag || temp_vvv.different_flag) {
        if (temp_v.current_value)
        {
            lv_img_set_src(p->wind_status, &fan0);
        }
        if (temp_vv.current_value)
        {
            lv_img_set_src(p->wind_status, &fan1);
        }
        if (temp_vvv.current_value)
        {
            lv_img_set_src(p->wind_status, &fan2);
        }
    }
    //风机应急
    temp_v =  lv_subject_get_int_from_type(subject, machine_fan_emr, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value)
        {
            lv_obj_clear_flag(p->wind_status_emr, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_add_flag(p->wind_status_emr, LV_OBJ_FLAG_HIDDEN);
        }
    }
    //-----------------------------------------------------------------
    // 15. 正反搅拌
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_mixer_cw, 0, pageid_home);
    temp_vv =  lv_subject_get_int_from_type(subject, machine_mixer_ccw, 0, pageid_home);
    if(temp_v.different_flag || temp_vv.different_flag ) {
        if (temp_v.current_value)
        { //正搅拌
            lv_obj_clear_flag(p->jiaoban_status, LV_OBJ_FLAG_HIDDEN);
            //lv_img_set_src(p->jiaoban_status, &jiaoban_status_rig); //gggyf
        }
        else if ( temp_vv.current_value )
        { //反搅拌
            lv_obj_clear_flag(p->jiaoban_status, LV_OBJ_FLAG_HIDDEN);
            //lv_img_set_src(p->jiaoban_status, &jiaoban_status_left);//gggyf
        }
        else
        { //低压
            lv_obj_clear_flag(p->jiaoban_status, LV_OBJ_FLAG_HIDDEN);
            //lv_img_set_src(p->jiaoban_status, &jiaoban_status_stop);//gggyf
        }
    }
    //搅拌应急
    temp_v =  lv_subject_get_int_from_type(subject, machine_mixer_emr, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value)
        {
            lv_obj_clear_flag(p->jiaoban_status_emr, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_add_flag(p->jiaoban_status_emr, LV_OBJ_FLAG_HIDDEN);
        }
    }
    //-----------------------------------------------------------------
    //16. 锁臂使能
    //-----------------------------------------------------------------
    for (int i = machine_arm0_cw_en; i <= machine_arm5_ccw_en;i++) {
        temp_v =  lv_subject_get_int_from_type(subject, i, 0, pageid_home);
        if (temp_v.current_value == 0) {
            lv_obj_clear_flag(p->lock_img, LV_OBJ_FLAG_HIDDEN);
            break;
        }
        if((i == machine_arm5_ccw_en) && (temp_v.current_value != 0)) {
            lv_obj_add_flag(p->lock_img, LV_OBJ_FLAG_HIDDEN);
        }
    }

    //-----------------------------------------------------------------
    // 17. 锁臂
    //-----------------------------------------------------------------
    //上
    for(int i = machine_arm1_cw_en; i <=  machine_arm5_cw_en; i++) {
        temp_v =  lv_subject_get_int_from_type(subject, i, 0, pageid_home);
        if(temp_v.different_flag) {
            if(temp_v.current_value == 0)
            {
                lv_obj_clear_flag(p->arms_up_lock[4-(machine_arm5_cw_en-i)], LV_OBJ_FLAG_HIDDEN);
            }else{
                lv_obj_add_flag(p->arms_up_lock[4-(machine_arm5_cw_en-i)], LV_OBJ_FLAG_HIDDEN);
            }
        }
    }
    //下
    for(int i = machine_arm1_ccw_en; i <=  machine_arm5_ccw_en; i++) {
        temp_v =  lv_subject_get_int_from_type(subject, i, 0, pageid_home);
        if(temp_v.different_flag) {
            if(temp_v.current_value == 0)
            {
                lv_obj_clear_flag(p->arms_down_lock[4-(machine_arm5_ccw_en-i)], LV_OBJ_FLAG_HIDDEN);
            }else{
                lv_obj_add_flag(p->arms_down_lock[4-(machine_arm5_ccw_en-i)], LV_OBJ_FLAG_HIDDEN);
            }
        }
    }
    //-----------------------------------------------------------------
    // 18. 角度
    //-----------------------------------------------------------------
    int32_t data_t = 0;
    for(int i = machine_arm1_status; i <=  machine_arm5_status; i++) {
        temp_v =  lv_subject_get_int_from_type(subject, i, 0, pageid_home);
        data_t = data_t +temp_v.current_value;
        sprintf(temp, "%d°", cal_angel(data_t) / 10);
        lv_label_set_text(p->arms_angel[4-(machine_arm5_status-i)], temp);
    }

    //-----------------------------------------------------------------
    // 19. 支撑模式
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_support_mode, 0, pageid_home);
    if(temp_v.different_flag) {
        // if (temp_v.current_value == 1)
        // { //全支撑模式
        //     //lv_label_set_text(p->arm_support_label, "全支撑");
        //     lv_img_set_src( p->truck, &bus_status_1 );
        // }
        // else if (temp_v.current_value == 2)
        // { //左支撑模式
        //     //lv_label_set_text(p->arm_support_label, "左支撑");
        //     lv_img_set_src( p->truck, &bus_status_7 );
        // }
        // else if (temp_v.current_value == 3)
        // { //右支撑模式
        //     //lv_label_set_text(p->arm_support_label, "右支撑");
        //     lv_img_set_src( p->truck, &bus_status_5 );
        // }
        // else if (temp_v.current_value == 4)
        // { //前支撑模式
        //     //lv_label_set_text(p->arm_support_label, "前支撑");
        //     lv_img_set_src( p->truck, &bus_status_3 );
        // }
        // else if (temp_v.current_value == 5)
        // { //小支撑模式???
        //     //lv_label_set_text(p->arm_support_label, "小支撑");
        //     lv_img_set_src( p->truck, &bus_status_2 );
        // }
        // else if (temp_v.current_value == 6)
        // {
        //     //lv_label_set_text(p->arm_support_label, "一级腿");
        //     lv_img_set_src( p->truck, &bus_status_2 );
        // }
        // else if (temp_v.current_value == 7)
        // {
        //     //lv_label_set_text(p->arm_support_label, "左前");
        //     lv_img_set_src( p->truck, &bus_status_8 );
        // }
        // else if (temp_v.current_value == 8)
        // {
        //     //lv_label_set_text(p->arm_support_label, "右前");
        //     lv_img_set_src( p->truck, &bus_status_6 );
        // }
        // else if (temp_v.current_value == 9)
        // {
        //     //lv_label_set_text(p->arm_support_label, "两级腿");
        //     lv_img_set_src( p->truck, &bus_status_2 );
        // }
        // else if (temp_v.current_value == 10)
        // {
        //     //lv_label_set_text(p->arm_support_label, "任意支撑");
        //     lv_img_set_src( p->truck, &bus_status_4 );
        // }
        // else if (temp_v.current_value == 100)
        // {
        //     //lv_label_set_text(p->arm_support_label, "RPC");
        //     lv_img_set_src( p->truck, &bus_status_9 );
        // }
        // else
        // { //无支撑模式
        //     //lv_label_set_text(p->arm_support_label, "无支撑");
        //     lv_img_set_src( p->truck, &bus_status_0 );
        // }
    }
    //-----------------------------------------------------------------
    // 20. 臂架液压油温
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_arms_temperature, 0, pageid_home);
    if(temp_v.different_flag) {
        sprintf(temp, "%.1f℃",temp_v.current_value / 10.0);
        lv_label_set_text(p->arm_oil_label, temp);
    }
    //-----------------------------------------------------------------
    // 21. 回转角度
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_arm0_status, 0, pageid_home);
    if(temp_v.different_flag) {
        sprintf(temp, "%.1f°", temp_v.current_value / 10.0);
        lv_label_set_text(p->cycle_angel_label, temp);
    }
    temp_v =  lv_subject_get_int_from_type(subject, machine_cw_emr, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value)
        {
            lv_obj_clear_flag(p->cycle_emr, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_add_flag(p->cycle_emr, LV_OBJ_FLAG_HIDDEN);
        }
    }
    //-----------------------------------------------------------------
    // 22. 危险等级
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_support_mode, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value == 1)
        {
            lv_img_set_src(p->danger, & danger0);
        }
        else if (temp_v.current_value == 2)
        {
            lv_img_set_src(p->danger, &danger1);
        }
        else if (temp_v.current_value == 3)
        {
            lv_img_set_src(p->danger, &danger2);
        }
        else if (temp_v.current_value == 4)
        {
            lv_img_set_src(p->danger, &danger3);
        }

        if (temp_v.current_value == 0)
        {
            lv_obj_add_flag(p->danger, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_clear_flag(p->danger, LV_OBJ_FLAG_HIDDEN);
        }
    }
    //-----------------------------------------------------------------
    // 23. 塌陷
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_collapse_logo, 0, pageid_home);
    if(temp_v.different_flag) {
        if (temp_v.current_value == 1)
        {
            lv_img_set_src(p->danger_icon, &mode_icon0);
        }
        else if (temp_v.current_value == 2)
        {
            lv_img_set_src(p->danger_icon, &mode_icon1);
        }
        else if (temp_v.current_value == 3)
        {
            lv_img_set_src(p->danger_icon, &mode_icon2);
        }
        else if (temp_v.current_value == 4)
        {
            lv_img_set_src(p->danger_icon, &mode_icon3);
        }

        if (temp_v.current_value == 0)
        {
            lv_obj_add_flag(p->danger_icon, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_clear_flag(p->danger_icon, LV_OBJ_FLAG_HIDDEN);
        }
    }
    //-----------------------------------------------------------------
    // 24. 安全系数
    //-----------------------------------------------------------------
    temp_v =  lv_subject_get_int_from_type(subject, machine_support_mode, 0, pageid_home);
    temp_vv =  lv_subject_get_int_from_type(subject, machine_safe_k, 0, pageid_home);
    if(temp_v.current_value == 10) {
        lv_obj_clear_flag(p->safety_bg, LV_OBJ_FLAG_HIDDEN);
        if(temp_vv.different_flag) {
            if(temp_vv.current_value > 200)
			{
					temp_vv.current_value = 200;
			}
			if(temp_vv.current_value == 0)
			{
					lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_add_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
			}
			if(temp_vv.current_value >= 100 && temp_vv.current_value <= 110)
			{
					lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_clear_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);

					lv_obj_set_size(p->red_obj, 35, 80*(temp_vv.current_value - 100)/100.0 );
					lv_obj_set_pos(p->red_obj, 65 + 145, 275 + 52 + 20 + (8 - 80*(temp_vv.current_value - 100)/100.0)) ;
			}
			else if(temp_vv.current_value > 110 && temp_vv.current_value <= 135)
			{
					lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_clear_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_clear_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);

					lv_obj_set_size(p->red_obj, 35, 8);
					lv_obj_set_pos(p->red_obj, 65 + 145, 275 + 52 + 20);

					lv_obj_set_size(p->yellow_obj, 35, 80*(temp_vv.current_value - 110)/100.0 );
					lv_obj_set_pos(p->yellow_obj, 65 + 145, 275 + 52 + (20 - 80*(temp_vv.current_value - 110)/100.0)) ;
			}
			else if(temp_vv.current_value > 135 && temp_vv.current_value <= 200)
			{
					lv_obj_clear_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_clear_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
					lv_obj_clear_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);

					lv_obj_set_size(p->red_obj, 35, 8);
					lv_obj_set_pos(p->red_obj, 65 + 145, 275 + 52 + 20);

					lv_obj_set_size(p->yellow_obj, 35, 20);
					lv_obj_set_pos(p->yellow_obj, 65 + 145, 275 + 52);

					lv_obj_set_size(p->green_obj, 35, 80*(temp_vv.current_value - 135)/100.0);
					lv_obj_set_pos(p->green_obj, 65 + 145, 275 + (52 - 80*(temp_vv.current_value - 135)/100.0));
			}
        }
        else
        {
            lv_obj_add_flag(p->safety_bg, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
        }

    }




#pragma endregion
}

temp_value_t lv_subject_get_int_from_type(lv_subject_t * subject, int32_t index,int32_t idx, page_idx type_enum) {

    lv_subject_t *temp ;
    temp_value_t temp_v;

    if(type_enum == pageid_system)
        temp = lv_subject_get_group_element(subject,index + idx);
    else if(type_enum == pageid_home)
        temp = lv_subject_get_group_element(subject,index- header_end - 1 + idx);
    else if(type_enum == pageid_rc)
        temp = lv_subject_get_group_element(subject,index- machine_end - 1 + idx);
    else if(type_enum == pageid_faults)
        temp = lv_subject_get_group_element(subject,index- rc_end - 1 + idx);
    else if(type_enum == pageid_antipping)
        temp = lv_subject_get_group_element(subject,index- faults_end - 1 + idx);
    else if (type_enum == pageid_factory)
        temp = lv_subject_get_group_element(subject,index- antipping_end - 1 + idx);

    temp_v.current_value = lv_subject_get_int(temp);
    temp_v.previous_value = lv_subject_get_previous_int(temp);
    if(temp_v.current_value != temp_v.previous_value)
        temp_v.different_flag = true;
    else
        temp_v.different_flag = false;

    return temp_v;
}

static int32_t cal_angel(int32_t data)
{
    while ( data < -1800)
    {
        data = data + 3600;
    }
    while ( data >= 1800)
    {
        data = data - 3600;
    }
    return data;
}