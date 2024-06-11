#include "../inc/working_page_antipping.h"
#include <stdlib.h>
#include <stdio.h>
#include "../inc/UiSubjectsWrapper.h"
#include "../inc/images_v4_0.h"
#include "../../res/fonts/language_control.h"
#include "../inc/sysparas_defs.h"
#include "../inc/UiRun.h"
#include "../inc/working_page_home.h"

static lv_style_t style5_red;
static lv_style_t style5_green;
static lv_style_t style5_yellow;
static lv_style_t style5_white;
static lv_style_t style_dialog;
static lv_style_t style_big_font;
static lv_style_t style_radius;
static lv_style_t style_rk_bar;
static lv_style_t style_bubble;
static lv_style_t style_line_red;
static lv_style_t style_line_green;

static void antipping_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_obj_t* working_page_antipping_init(lv_obj_t *page)
{
    working_page_antipping_t *p = lv_malloc(sizeof (working_page_antipping_t));
    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    static lv_style_t bg_style;
    lv_style_init(&bg_style);
    lv_style_set_bg_color(&bg_style, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_bg_opa(&bg_style, LV_OPA_COVER);
    lv_style_set_text_color(&bg_style, lv_color_black());
    lv_style_set_border_width(&bg_style, 2);
    lv_style_set_border_color(&bg_style, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_border_opa(&bg_style, LV_OPA_COVER);
    lv_style_set_border_side(&bg_style, LV_BORDER_SIDE_FULL | LV_BORDER_SIDE_INTERNAL);
    lv_style_set_radius(&bg_style,0);
    lv_style_set_pad_all(&bg_style,0);

    static lv_style_t style0;
    lv_style_init(&style0);
    lv_style_set_bg_color(&style0, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&style0, LV_OPA_COVER);
    lv_style_set_border_width(&style0, 2);
    lv_style_set_border_color(&style0,  lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_radius(&style0,0);
    lv_style_set_pad_all(&style0,0);

    static lv_style_t style00;
    lv_style_init(&style00);
    lv_style_set_bg_color(&style00, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&style00, LV_OPA_COVER);
    lv_style_set_border_width(&style00, 2);
    lv_style_set_border_color(&style00,  lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_radius(&style00,0);
    lv_style_set_pad_all(&style00,0);

    static lv_style_t style_rec;
    lv_style_init(&style_rec);
    lv_style_set_bg_color(&style_rec, lv_color_make(0x00, 0xff, 0x00));
    lv_style_set_bg_opa(&style_rec, LV_OPA_COVER);
    lv_style_set_border_width(&style_rec, 0);
    lv_style_set_radius(&style_rec,0);
    lv_style_set_pad_all(&style_rec,0);

    static lv_style_t style02;
    lv_style_init(&style02);
    lv_style_set_text_color(&style02, lv_color_black());
    lv_style_set_text_font(&style02, &working_mode_24px);
    lv_style_set_text_align(&style02, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style02,0);
    lv_style_set_pad_all(&style02,0);

    static lv_style_t style3;
    lv_style_init(&style3);
    lv_style_set_text_color(&style3, lv_color_black());
    lv_style_set_text_font(&style3, &working_mode_20px);
    lv_style_set_text_align(&style3, LV_TEXT_ALIGN_CENTER);
    lv_style_set_radius(&style3,0);
    lv_style_set_pad_all(&style3,0);

    static lv_style_t style4;
    lv_style_init(&style4);
    lv_style_set_bg_color(&style4, lv_color_make(0x00, 0xff,0x00));
    lv_style_set_bg_opa(&style4, LV_OPA_COVER);
    lv_style_set_radius(&style4, LV_RADIUS_CIRCLE);
    lv_style_set_border_color(&style4, lv_color_make(0x00, 0x00,0x00));
    lv_style_set_border_width(&style4, 2);
    lv_style_set_radius(&style4,0);
    lv_style_set_pad_all(&style4,0);

    static lv_style_t style5;
    lv_style_init(&style5);
    lv_style_set_bg_color(&style5, lv_color_make(0xff, 0x00, 0x00));
    lv_style_set_bg_opa(&style5, LV_OPA_COVER);
    lv_style_set_border_width(&style5, 2);
    lv_style_set_border_color(&style5, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_radius(&style5,0);
    lv_style_set_pad_all(&style5,0);

    lv_style_init(&style5_green);
    lv_style_set_bg_color(&style5_green, lv_color_make(0x00, 0xff, 0x00));
    lv_style_set_bg_opa(&style5_green, LV_OPA_COVER);
    lv_style_set_border_width(&style5_green, 2);
    lv_style_set_border_color(&style5_green, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_radius(&style5_green,0);
    lv_style_set_pad_all(&style5_green,0);

    lv_style_init(&style5_yellow);
    lv_style_set_bg_color(&style5_yellow, lv_color_make(0xff, 0xff, 0x00));
    lv_style_set_bg_opa(&style5_yellow, LV_OPA_COVER);
    lv_style_set_border_width(&style5_yellow, 2);
    lv_style_set_border_color(&style5_yellow, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_radius(&style5_yellow,0);
    lv_style_set_pad_all(&style5_yellow,0);

    lv_style_init(&style5_red);
    lv_style_set_bg_color(&style5_red, lv_color_make(0xff, 0x00, 0x00));
    lv_style_set_bg_opa(&style5_red, LV_OPA_COVER);
    lv_style_set_border_width(&style5_red, 2);
    lv_style_set_border_color(&style5_red, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_radius(&style5_red,0);
    lv_style_set_pad_all(&style5_red,0);

    lv_style_init(&style5_white);
    lv_style_set_bg_color(&style5_white, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_bg_opa(&style5_white, LV_OPA_COVER);
    lv_style_set_border_width(&style5_white, 2);
    lv_style_set_border_color(&style5_white, lv_color_make(0x00, 0x00, 0x00));
    lv_style_set_radius(&style5_white,0);
    lv_style_set_pad_all(&style5_white,0);

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 40 - 40);
    lv_obj_set_pos(obj, 0, 40);
    lv_obj_add_style(obj, &bg_style, 0);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *g1 = lv_obj_create(obj);
    lv_obj_remove_flag(g1, LV_OBJ_FLAG_SCROLLABLE);
    
    lv_obj_set_size(g1, 170, parent_height - 40 - 40 - 12);
    lv_obj_set_pos(g1, 4, 4);    
    lv_obj_add_style(g1, &style0, 0);

    lv_obj_t *tmp_label ;
    int i;

    p->current_label = lv_label_create(g1);
    lv_obj_set_pos(p->current_label,  5, 20);
    lv_obj_set_size(p->current_label,160,30);
    lv_obj_add_style(p->current_label, &style02, 0);
    language_lv_label_set_text(p->current_label, "label_21");

    p->mode_label = lv_label_create(g1);
    lv_obj_set_pos(p->mode_label,  0, 90);
    lv_obj_set_size(p->mode_label,  170, 60);
    lv_obj_add_style(p->mode_label, &style02, 0);
    language_lv_label_set_text(p->mode_label, "label_22");

    p->mode_img = lv_img_create(g1);
    lv_img_set_src(p->mode_img, &bus_state0);
    lv_obj_set_pos(p->mode_img, 0-20, 120);
    lv_img_set_zoom(p->mode_img, 180);

    p->warning_title = lv_label_create(g1);
    lv_obj_set_pos(p->warning_title,  2, 300);
    lv_obj_add_style(p->warning_title, &style3, 0);
    language_lv_label_set_text(p->warning_title, "label_23");

    p->warning1_cycle = lv_obj_create(g1);
    lv_obj_set_size(p->warning1_cycle,  19, 19);
    lv_obj_set_pos(p->warning1_cycle,  7, 330);
    lv_obj_add_style(p->warning1_cycle, &style4, 0);

    p->warning2_cycle = lv_obj_create(g1);
    lv_obj_set_size(p->warning2_cycle,  19, 19);
    lv_obj_set_pos(p->warning2_cycle,  7, 360);
    lv_obj_add_style(p->warning2_cycle, &style4, 0);

    p->warning_content1 = lv_label_create(g1);
    lv_obj_set_pos(p->warning_content1,  37, 330);
    lv_obj_add_style(p->warning_content1, &style3, 0);
    language_lv_label_set_text(p->warning_content1, "label_24");

    p->warning_content2 = lv_label_create(g1);
    lv_obj_set_pos(p->warning_content2,  37, 360);
    lv_obj_add_style(p->warning_content2, &style3, 0);
    language_lv_label_set_text(p->warning_content2, "label_25");

    p->bus_state_bg = lv_img_create(obj);
    lv_img_set_src(p->bus_state_bg, &bus_state0);
    lv_obj_set_pos(p->bus_state_bg, 249 + 12, 55 -15);
    lv_obj_add_flag(p->bus_state_bg, LV_OBJ_FLAG_HIDDEN);


    for(i = 0 ; i < 12 ; i++)
    {
        p->label_angle[i] = lv_label_create(obj);
        lv_obj_add_style(p->label_angle[i], &style02, 0);
        lv_obj_add_flag(p->label_angle[i], LV_OBJ_FLAG_HIDDEN);
    }

    lv_obj_set_pos(p->label_angle[0], 400, 355);
    lv_label_set_text(p->label_angle[0], "0");

    lv_obj_set_pos(p->label_angle[1], 220, 190);
    lv_label_set_text(p->label_angle[1], "90");

    lv_obj_set_pos(p->label_angle[2], 400 - 90 , 355 -22);
    lv_label_set_text(p->label_angle[2], "30");

    lv_obj_set_pos(p->label_angle[3], 210 + 35 , 190 + 80);
    lv_label_set_text(p->label_angle[3], "60");

    lv_obj_set_pos(p->label_angle[4], 400 + 90 , 355 -22);
    lv_label_set_text(p->label_angle[4], "-30");

    lv_obj_set_pos(p->label_angle[5], 400 + 155 -5 , 190 + 80);
    lv_label_set_text(p->label_angle[5], "-60");

    lv_obj_set_pos(p->label_angle[6], 400 + 180 -10, 190);
    lv_label_set_text(p->label_angle[6], "-90");

    lv_obj_set_pos(p->label_angle[7], 210 + 35 -15, 190 - 80);
    lv_label_set_text(p->label_angle[7], "120");

    lv_obj_set_pos(p->label_angle[8], 400 + 155, 190 - 80);
    lv_label_set_text(p->label_angle[8], "-120");

    lv_obj_set_pos(p->label_angle[9], 400 - 90 -25 -8, 190 - 143);
    lv_label_set_text(p->label_angle[9], "150");

    lv_obj_set_pos(p->label_angle[10], 400 + 90 +10, 190 - 143);
    lv_label_set_text(p->label_angle[10], "-150");

    lv_obj_set_pos(p->label_angle[11], 400 - 12, 190 - 170);
    lv_label_set_text(p->label_angle[11], "180");

    //倾斜等级
    p->danger_level_icon[0] = lv_img_create(obj);
    lv_img_set_src(p->danger_level_icon[0], &danger2);
    lv_obj_set_pos(p->danger_level_icon[0], 180, 4);

    for(i = 0 ; i < 3; i++)
    {
        p->danger_level_1[i] = lv_obj_create(obj);
        lv_obj_set_size(p->danger_level_1[i], 40,16);
        lv_obj_set_pos(p->danger_level_1[i], 190 -5 , 50 + 16* i);
        lv_obj_add_style(p->danger_level_1[i], &style5, 0);
    }

    p->danger_level_icon[1] = lv_img_create(obj);
    lv_img_set_src(p->danger_level_icon[1], &danger2);
    lv_obj_set_pos(p->danger_level_icon[1], 600, 4);

    for(i = 0 ; i < 3; i++)
    {
        p->danger_leve1_2[i] = lv_obj_create(obj);
        lv_obj_set_size(p->danger_leve1_2[i], 40,16);
        lv_obj_set_pos(p->danger_leve1_2[i], 610 -5 , 50 + 16* i);
        lv_obj_add_style(p->danger_leve1_2[i], &style5, 0);
    }

    p->danger_level_icon[2] = lv_img_create(obj);
    lv_img_set_src(p->danger_level_icon[2], &danger2);
    lv_obj_set_pos(p->danger_level_icon[2], 180, 300);

    for(i = 0 ; i < 3; i++)
    {
        p->danger_leve1_3[i] = lv_obj_create(obj);
        lv_obj_set_size(p->danger_leve1_3[i], 40,16);
        lv_obj_set_pos(p->danger_leve1_3[i], 190 -5 , 346 + 16* i);
        lv_obj_add_style(p->danger_leve1_3[i], &style5, 0);
    }

    p->danger_level_icon[3] = lv_img_create(obj);
    lv_img_set_src(p->danger_level_icon[3], &danger2);
    lv_obj_set_pos(p->danger_level_icon[3], 600, 300);

    for(i = 0 ; i < 3; i++)
    {
        p->danger_leve1_4[i] = lv_obj_create(obj);
        lv_obj_set_size(p->danger_leve1_4[i], 40,16);
        lv_obj_set_pos(p->danger_leve1_4[i], 610 -5 , 346 + 16* i);
        lv_obj_add_style(p->danger_leve1_4[i], &style5, 0);
    }

    //红腿
    p->red_leg_1_long =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_1_long, &redleg_1_long);
    lv_obj_set_pos(p->red_leg_1_long, 261 + 64 , 40 + 82);

    p->red_leg_1_short =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_1_short, &redleg_1_short);
    lv_obj_set_pos(p->red_leg_1_short, 261 + 83 , 40 + 93);

    p->red_leg_2_long =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_2_long, &redleg_2_long);
    lv_obj_set_pos(p->red_leg_2_long, 261 + 165 , 40 + 83);

    p->red_leg_2_short =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_2_short, &redleg_2_short);
    lv_obj_set_pos(p->red_leg_2_short, 261 + 160 , 40 + 93);

    p->red_leg_3_long =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_3_long, &redleg_3_long);
    lv_obj_set_pos(p->red_leg_3_long, 261 + 64 , 40 + 165);

    p->red_leg_4_long =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_4_long, &redleg_4_long);
    lv_obj_set_pos(p->red_leg_4_long, 261 + 174 , 40 + 165);

    p->red_leg_5_long =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_5_long, &redleg_5_long);
    lv_obj_set_pos(p->red_leg_5_long, 261 + 114 , 40 + 164);

    p->red_leg_6_long =  lv_img_create(obj);
    lv_img_set_src(p->red_leg_6_long, &redleg_5_long);
    lv_obj_set_pos(p->red_leg_6_long, 261 + 172 , 40 + 164);

    //回转
    p->bus_cycle =  lv_img_create(obj);
    lv_img_set_src(p->bus_cycle, &bus_arm0);
    lv_obj_set_pos(p->bus_cycle, 400 -60, 200 -40 -20);
    lv_img_set_pivot(p->bus_cycle, 138/2, 138/2);
    lv_img_set_zoom(p->bus_cycle, 300);
    lv_obj_add_flag(p->bus_cycle, LV_OBJ_FLAG_HIDDEN);
    //lv_img_set_angle(p->bus_cycle, -900);

    //任意支撑
    p->coord_bg = lv_img_create(obj);
    lv_img_set_src(p->coord_bg, &coord_bg);
    lv_obj_set_pos(p->coord_bg, 400 -60- 80, 200 -40 -20 -80);

    //距离 + waring标志
    for(i = 0; i <4; i++)
    {
        p->warning_icon[i] = lv_img_create(obj);
        lv_img_set_src(p->warning_icon[i], &warning_icon);
        lv_img_set_zoom(p->warning_icon[i], 360);
    }
    lv_obj_set_pos(p->warning_icon[0], 260 + 137 ,  60 +28);    //上
    lv_obj_set_pos(p->warning_icon[3], 260 + 250, 60 +140);  	//右
    lv_obj_set_pos(p->warning_icon[2], 260 + 137, 60 + 300-48);    //下
    lv_obj_set_pos(p->warning_icon[1], 260 + 30, 60 +140); 	//左

    p->leg_1_level_label = lv_label_create(obj);
    lv_obj_set_pos(p->leg_1_level_label,  370, 20);
    lv_obj_add_style(p->leg_1_level_label, &style02, 0);
    lv_label_set_text(p->leg_1_level_label, "0m");
    lv_obj_add_flag(p->leg_1_level_label, LV_OBJ_FLAG_HIDDEN);

    p->leg_2_level_label = lv_label_create(obj);
    lv_obj_set_pos(p->leg_2_level_label,  540+30, 200);
    lv_obj_add_style(p->leg_2_level_label, &style02, 0);
    lv_label_set_text(p->leg_2_level_label, "0m");
    lv_obj_add_flag(p->leg_2_level_label, LV_OBJ_FLAG_HIDDEN);

    p->leg_3_level_label = lv_label_create(obj);
    lv_obj_set_pos(p->leg_3_level_label,  370, 370);
    lv_obj_add_style(p->leg_3_level_label, &style02, 0);
    lv_label_set_text(p->leg_3_level_label, "0m");
    lv_obj_add_flag(p->leg_3_level_label, LV_OBJ_FLAG_HIDDEN);

    p->leg_4_level_label = lv_label_create(obj);
    lv_obj_set_pos(p->leg_4_level_label,  180, 200);
    lv_obj_add_style(p->leg_4_level_label, &style02, 0);
    lv_label_set_text(p->leg_4_level_label, "0m");
    lv_obj_add_flag(p->leg_4_level_label, LV_OBJ_FLAG_HIDDEN);

    //4腿摆动
    p->leg_1 = lv_img_create(obj); 				//左1 顺时针
    lv_img_set_src(p->leg_1, &leg_short_black);
    lv_obj_set_pos(p->leg_1, 260 + 69 -1, 60 + 75 );
    //lv_img_set_zoom(p->leg_1, 192);
    lv_img_set_pivot(p->leg_1, 128/2, 128/2);
    lv_img_set_angle(p->leg_1, 3140);


    p->leg_2 = lv_img_create(obj);
    lv_img_set_src(p->leg_2, &leg_short_black);
    lv_obj_set_pos(p->leg_2, 260 + 105 -1  , 60 + 75  );
    //lv_img_set_zoom(p->leg_2, 192);
    lv_img_set_pivot(p->leg_2, 128/2, 128/2);
    lv_img_set_angle(p->leg_2, 460);


    p->leg_3 = lv_img_create(obj);
    lv_img_set_src(p->leg_3, &leg_short_black);
    lv_obj_set_pos(p->leg_3, 260 + 106 -2, 60 + 116 -2);
    //lv_img_set_zoom(p->leg_3, 192);
    lv_img_set_pivot(p->leg_3, 128/2, 128/2);
    lv_img_set_angle(p->leg_3, 1800);


    p->leg_4 = lv_img_create(obj);
    lv_img_set_src(p->leg_4, &leg_short_black);
    lv_obj_set_pos(p->leg_4, 260 + 69 -2, 60 + 116 -2);
    //lv_img_set_zoom(p->leg_4, 192);
    lv_img_set_pivot(p->leg_4,128/2, 128/2);
    lv_img_set_angle(p->leg_4, 1800);

    p->any_state_busbg = lv_img_create(obj);
    lv_img_set_src(p->any_state_busbg, &bus);
    lv_obj_set_pos(p->any_state_busbg, 400 -60 +1  , 200 -40 -20+1);

    p->bus_cycle_any =  lv_img_create(obj);
    lv_img_set_src(p->bus_cycle_any, &bus_arm0);
    lv_obj_set_pos(p->bus_cycle_any, 340, 140);
    lv_img_set_pivot(p->bus_cycle_any, 138/2, 138/2);

    for(i = 0; i < 4; i++)
    {
        p->leg_length[i] = lv_label_create(obj);
        lv_obj_add_style(p->leg_length[i], &style02, 0);
        lv_label_set_text(p->leg_length[i], "");
    }

    lv_obj_align_to(p->leg_length[0],p->leg_1,LV_ALIGN_OUT_LEFT_TOP, -5 , 0);
    lv_obj_align_to(p->leg_length[1],p->leg_2,LV_ALIGN_OUT_RIGHT_TOP, 5 , 0);
    lv_obj_align_to(p->leg_length[2],p->leg_3,LV_ALIGN_OUT_RIGHT_BOTTOM, 5 , 0);
    lv_obj_align_to(p->leg_length[3],p->leg_4,LV_ALIGN_OUT_LEFT_BOTTOM, 5 , 0);


    p->line_cycle = lv_line_create(obj);
    //lv_line_set_points(p->line_cycle[0], line_points, 2);
    lv_obj_set_style_line_width(p->line_cycle, 2 ,0);
    lv_obj_set_style_line_color(p->line_cycle, lv_color_make(0xff, 0x00, 0x00),0);
    lv_obj_set_style_line_opa(p->line_cycle, 255, 0);
    //lv_obj_add_flag(p->line_cycle[i], LV_OBJ_FLAG_HIDDEN);

//		line_data[0] = (lv_point_t){400,220};
//		line_data[1] = (lv_point_t){430,120};
////						line_data[0].x = line_points[0].x;
////						line_data[0].y = line_points[0].y;
////						line_data[1].x = line_points[1].x;
////						line_data[1].y = line_points[1].y;
//		lv_line_set_points(p->line_cycle[0], line_data, 2);

    p->danger_mode_icon = lv_img_create(obj);
    lv_img_set_src(p->danger_mode_icon, &mode_icon1);
    lv_obj_set_pos(p->danger_mode_icon, 670, 20);

    //色块
    p->safety_bg = lv_obj_create(obj);
    lv_obj_set_size(p->safety_bg, 50, 300);
    lv_obj_set_pos(p->safety_bg, 670, 80);
    lv_obj_add_style(p->safety_bg, &style00, 0);

    //绿色
    p->green_obj = lv_obj_create(obj);
    lv_obj_set_size(p->green_obj, 50, 195);
    lv_obj_set_pos(p->green_obj, 670, 80);
    lv_obj_add_style(p->green_obj, &style00, 0);
    lv_obj_set_style_bg_color(p->green_obj, lv_color_make(0x00, 0xff, 0x00),0);
    lv_obj_set_style_border_color(p->green_obj,  lv_color_make(0x00, 0xff, 0x00),0);
    lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);

    //黄色
    p->yellow_obj = lv_obj_create(obj);
    lv_obj_set_size(p->yellow_obj, 50, 75);
    lv_obj_set_pos(p->yellow_obj, 670, 80 + 195);
    lv_obj_add_style(p->yellow_obj, &style00, 0);
    lv_obj_set_style_bg_color(p->yellow_obj, lv_color_make(0xff, 0xff, 0x00),0);
    lv_obj_set_style_border_color(p->yellow_obj,  lv_color_make(0xff, 0xff, 0x00),0);
    lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);

    //红色
    p->red_obj = lv_obj_create(obj);
    lv_obj_set_size(p->red_obj, 50, 30);
    lv_obj_set_pos(p->red_obj, 670, 80 + 195 + 75);
    lv_obj_add_style(p->red_obj, &style00, 0);
    lv_obj_set_style_bg_color(p->red_obj, lv_color_make(0xff, 0x00, 0x00),0);
    lv_obj_set_style_border_color(p->red_obj,  lv_color_make(0xff, 0x00, 0x00),0);
    lv_obj_add_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);

    //观察者模式
    lv_subject_add_observer_obj(&subject_faults_all, antipping_observer_list_cb, page, p);
}

static void antipping_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject)
{
    lv_obj_t *page_rc = lv_observer_get_target_obj(observer);
    working_page_antipping_t *p = (working_page_antipping_t *) observer->user_data;
    static bool _start = false;
    char temp[64];
    temp_value_t support_mode;
    temp_value_t collapse_flag;
    temp_value_t alarm_flag;
    temp_value_t limit_flag;
    temp_value_t leg_left_up_level;
    temp_value_t leg_right_up_level;
    temp_value_t leg_left_down_level;
    temp_value_t leg_right_down_level;
    temp_value_t leg_left_up;
    temp_value_t leg_left_down;
    temp_value_t leg_right_up;
    temp_value_t leg_right_down;
    temp_value_t leg_left_up_collapse;
    temp_value_t leg_left_down_collapse;
    temp_value_t leg_right_up_collapse;
    temp_value_t leg_right_down_collapse;
    temp_value_t up_dis;
    temp_value_t down_dis;
    temp_value_t left_dis;
    temp_value_t right_dis;
    temp_value_t danger_edge;
    temp_value_t arm0_status;
    temp_value_t safe_k;
    support_mode =  lv_subject_get_int_from_type(subject, antipping_support_mode, 0, pageid_antipping);

#pragma region 1.支撑模式
    if (support_mode.different_flag)
    {
        if (support_mode.current_value == 1)
        { //全支撑模式
            lv_label_set_text(p->mode_label, "全支撑");
            lv_img_set_src( p->mode_img, &bus_state1);
        }
        else if (support_mode.current_value == 2)
        { //左支撑模式
            lv_label_set_text(p->mode_label, "左支撑");
            lv_img_set_src( p->mode_img, &bus_state7);
        }
        else if (support_mode.current_value == 3)
        { //右支撑模式
            lv_label_set_text(p->mode_label, "右支撑");
            lv_img_set_src( p->mode_img, &bus_state5);
        }
        else if (support_mode.current_value == 4)
        { //前支撑模式
            lv_label_set_text(p->mode_label, "前支撑");
            lv_img_set_src( p->mode_img, &bus_state3);
        }
        else if (support_mode.current_value == 5)
        { //小支撑模式???
            lv_label_set_text(p->mode_label, "小支撑");
            lv_img_set_src( p->mode_img, &bus_state2);
        }
        else if (support_mode.current_value == 6)
        {
            lv_label_set_text(p->mode_label, "一级腿支撑");
            lv_img_set_src( p->mode_img, &bus_state2);
        }
        else if (support_mode.current_value == 7)
        {
            lv_label_set_text(p->mode_label, "左前支撑");
            //补图lv_img_set_src( p->mode_img, &bus_state8);
        }
        else if (support_mode.current_value == 8)
        {
            lv_label_set_text(p->mode_label, "右前支撑");
            lv_img_set_src( p->mode_img, &bus_state6);
        }
        else if (support_mode.current_value == 9)
        {
            lv_label_set_text(p->mode_label, "两级腿支撑");
            lv_img_set_src( p->mode_img, &bus_state2);
        }
        else if (support_mode.current_value == 10)
        {
            lv_label_set_text(p->mode_label, "任意支撑");
            lv_img_set_src( p->mode_img, &bus_state4);
        }
        else if (support_mode.current_value == 100)
        {
            lv_label_set_text(p->mode_label, "RPC");
            //补图lv_img_set_src( p->mode_img, &bus_state9);
        }
        else
        { //无支撑模式
            lv_label_set_text(p->mode_label, "无支撑");
            lv_img_set_src( p->mode_img, &bus_state0);
        }
    }
#pragma endregion 1.支撑模式

#pragma region 2.支撑安全预警提示
    collapse_flag =  lv_subject_get_int_from_type(subject, antipping_collapse_flag, 0, pageid_antipping);
    alarm_flag = lv_subject_get_int_from_type(subject, antipping_alarm_flag, 0, pageid_antipping);
    limit_flag = lv_subject_get_int_from_type(subject, antipping_limit_flag, 0, pageid_antipping);
    if(collapse_flag.current_value == 1||support_mode.current_value == 10)
    {
        lv_obj_clear_flag(p->warning_title, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->warning_content1, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->warning_content2, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->warning1_cycle, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->warning2_cycle, LV_OBJ_FLAG_HIDDEN);
        if (alarm_flag.current_value == 1)
        {
            lv_obj_set_style_bg_color(p->warning1_cycle,lv_color_make(0x00, 0xff, 0x00),0);
        }
        else
        {
            lv_obj_set_style_bg_color(p->warning1_cycle,lv_color_make(0xde, 0xde, 0xde),0);
        }
        if (limit_flag.current_value == 1)
        {
            lv_obj_set_style_bg_color(p->warning2_cycle,lv_color_make(0x00, 0xff, 0x00),0);
        }
        else
        {
            lv_obj_set_style_bg_color(p->warning2_cycle,lv_color_make(0xde, 0xde, 0xde),0);
        }

    }
    else
    {
        lv_obj_add_flag(p->warning_title, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning_content1, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning_content2, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning1_cycle, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning2_cycle, LV_OBJ_FLAG_HIDDEN);
    }
#pragma endregion 2.支撑安全预警提示

#pragma region 3.支腿塌陷级别
    leg_left_up_level = lv_subject_get_int_from_type(subject, antipping_leg_left_up_level, 0, pageid_antipping);
    leg_right_up_level = lv_subject_get_int_from_type(subject, antipping_leg_right_up_level, 0, pageid_antipping);
    leg_left_down_level = lv_subject_get_int_from_type(subject, antipping_leg_left_down_level, 0, pageid_antipping);
    leg_right_down_level = lv_subject_get_int_from_type(subject, antipping_leg_right_down_level, 0, pageid_antipping);
    if (collapse_flag.current_value)
    {
        for(int i = 0; i < 4; i ++)
        {
            lv_obj_clear_flag(p->danger_level_icon[i], LV_OBJ_FLAG_HIDDEN);
        }
        for(int i = 0; i < 3; i ++)
        {
            lv_obj_clear_flag(p->danger_level_1[i], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(p->danger_leve1_2[i], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(p->danger_leve1_3[i], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(p->danger_leve1_4[i], LV_OBJ_FLAG_HIDDEN);
        }
        //左上
        if (leg_left_up_level.current_value >= -1)
        {
            lv_obj_set_style_bg_color(p->danger_level_1[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_level_1[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_level_1[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[0], &danger1);
        }
        else if (leg_left_up_level.current_value == -2 )
        {
            lv_obj_set_style_bg_color(p->danger_level_1[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_level_1[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_level_1[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[0], &danger2);
        }
        else if (leg_left_up_level.current_value == -3 )
        {
            lv_obj_set_style_bg_color(p->danger_level_1[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_level_1[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_level_1[2], lv_color_make(0xff, 0x00, 0x00),0);
            lv_img_set_src(p->danger_level_icon[0], &danger3);
        }
        else
        {
            lv_obj_set_style_bg_color(p->danger_level_1[0], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_level_1[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_level_1[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[0], &danger1);

        }
        //右上
        if (leg_right_up_level.current_value >= -1 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_2[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[1], &danger1);

        }
        else if (leg_right_up_level.current_value == -2 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_2[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[1], &danger2);
        }
        else if (leg_right_up_level.current_value == -3 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_2[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[2], lv_color_make(0xff, 0x00, 0x00),0);
            lv_img_set_src(p->danger_level_icon[1], &danger3);
        }
        else
        {
            lv_obj_set_style_bg_color(p->danger_leve1_2[0], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_2[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[1], &danger1);
        }

        //左下
        if (leg_left_down_level.current_value >= -1 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_3[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[2], &danger1);
        }
        else if (leg_left_down_level.current_value == -2 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_3[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[2], &danger2);
        }
        else if (leg_left_down_level.current_value == -3 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_3[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[2], lv_color_make(0xff, 0x00, 0x00),0);
            lv_img_set_src(p->danger_level_icon[2], &danger3);
        }
        else
        {
            lv_obj_set_style_bg_color(p->danger_leve1_3[0], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_3[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[2], &danger1);
        }

        //右下
        if (leg_right_down_level.current_value == 0 || leg_right_down_level.current_value == -1 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_4[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[3], &danger1);
        }
        else if (leg_right_down_level.current_value == -2 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_4[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[3], &danger2);
        }
        else if (leg_right_down_level.current_value == -3 )
        {
            lv_obj_set_style_bg_color(p->danger_leve1_4[0], lv_color_make(0x00, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[1], lv_color_make(0xff, 0xff, 0x00),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[2], lv_color_make(0xff, 0x00, 0x00),0);
            lv_img_set_src(p->danger_level_icon[3], &danger3);
        }
        else
        {
            lv_obj_set_style_bg_color(p->danger_leve1_4[0], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[1], lv_color_make(0xff, 0xff, 0xff),0);
            lv_obj_set_style_bg_color(p->danger_leve1_4[2], lv_color_make(0xff, 0xff, 0xff),0);
            lv_img_set_src(p->danger_level_icon[3], &danger1);
        }
    }
    else
    {
        for(int i = 0; i < 4; i ++)
        {
            lv_obj_add_flag(p->danger_level_icon[i], LV_OBJ_FLAG_HIDDEN);
        }
        for(int i = 0; i < 3; i ++)
        {
            lv_obj_add_flag(p->danger_level_1[i], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(p->danger_leve1_2[i], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(p->danger_leve1_3[i], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(p->danger_leve1_4[i], LV_OBJ_FLAG_HIDDEN);
        }
    }
#pragma endregion 3.支腿塌陷级别

#pragma region 任意支撑
    arm0_status =  lv_subject_get_int_from_type(subject, antipping_arm0_status, 0, pageid_antipping);
    if(support_mode.current_value == 10) //任意支撑
    {
        lv_obj_clear_flag(p->leg_length[0], LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_length[1], LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_length[2], LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_length[3], LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_1, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_2, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_3, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->leg_4, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->bus_cycle_any, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->line_cycle, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->any_state_busbg, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->coord_bg, LV_OBJ_FLAG_HIDDEN);

        lv_obj_add_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_1_short, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_2_short, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_5_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_6_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->bus_state_bg, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->bus_cycle, LV_OBJ_FLAG_HIDDEN);
        for(int i = 0 ; i < 12 ; i++)
        {
            lv_obj_add_flag(p->label_angle[i], LV_OBJ_FLAG_HIDDEN);
        }
        lv_obj_add_flag(p->bus_cycle, LV_OBJ_FLAG_HIDDEN);

        leg_left_up = lv_subject_get_int_from_type(subject, antipping_leg_left_up, 0, pageid_antipping);
        leg_right_up = lv_subject_get_int_from_type(subject, antipping_leg_right_up, 0,pageid_antipping);
        leg_left_down = lv_subject_get_int_from_type(subject, antipping_leg_left_down, 0,pageid_antipping);
        leg_right_down = lv_subject_get_int_from_type(subject, antipping_leg_right_down, 0,pageid_antipping);
        up_dis = lv_subject_get_int_from_type(subject, antipping_up_dis, 0,pageid_antipping);
        right_dis = lv_subject_get_int_from_type(subject, antipping_right_dis, 0,pageid_antipping);
        down_dis = lv_subject_get_int_from_type(subject, antipping_down_dis, 0,pageid_antipping);
        left_dis = lv_subject_get_int_from_type(subject, antipping_left_dis, 0,pageid_antipping);
        danger_edge = lv_subject_get_int_from_type(subject, antipping_danger_edge, 0,pageid_antipping);
        //支腿开度,前2腿伸缩，固定46度,后两腿摆动,最大50.4 开度值固定显示
        int xx,yy;
        if(leg_left_up.different_flag)
        {
            xx = 20 - 20 * leg_left_up.current_value / 100.0;
            yy = 20 - 20 * leg_left_up.current_value / 100.0;
            lv_obj_set_pos(p->leg_1, 328 + xx  , 135 + yy);
            lv_label_set_text_fmt( p->leg_length[0], "%d%%", leg_left_up.current_value);
        }

        if(leg_right_up.different_flag)
        {
            xx = 20 - 20 * leg_right_up.current_value / 100.0;
            yy = 20 - 20 * leg_right_up.current_value / 100.0;
            lv_obj_set_pos(p->leg_2, 364 -xx, 135 + yy  );
            lv_label_set_text_fmt( p->leg_length[1], "%d%%", leg_right_up.current_value);
        }

        if(leg_right_down.different_flag)
        {
            lv_img_set_angle(p->leg_3, 1800 - 504 * leg_right_down.current_value / 100.0);
            lv_label_set_text_fmt( p->leg_length[2], "%d%%", leg_right_down.current_value);
        }

        if(leg_left_down.different_flag)
        {
            xx = 1800 - 504 * leg_left_down.current_value / 100.0;
            lv_img_set_angle(p->leg_4, 1800 + 504 * leg_left_down.current_value / 100.0);
            lv_label_set_text_fmt( p->leg_length[3], "%d%%", leg_left_down.current_value );
        }

        //支腿变红
        if(leg_left_up_collapse.different_flag)
        {
            if(leg_left_up_collapse.current_value == 1)
            {
                lv_img_set_src(p->leg_1, &leg_short_red);
            }else
            {
                lv_img_set_src(p->leg_1, &leg_short_black);
            }
        }

        if(leg_right_up_collapse.different_flag)
        {
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_img_set_src(p->leg_2, &leg_short_red);
            }else
            {
                lv_img_set_src(p->leg_2, &leg_short_black);
            }
        }

        if(leg_right_down_collapse.different_flag)
        {
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_img_set_src(p->leg_3, &leg_short_red);
            }else
            {
                lv_img_set_src(p->leg_3, &leg_short_black);
            }
        }

        if(leg_left_down_collapse.different_flag)
        {
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_img_set_src(p->leg_4, &leg_short_red);
            }else
            {
                lv_img_set_src(p->leg_4, &leg_short_black);
            }
        }
        //距离
        if(up_dis.different_flag)
        {
            sprintf(temp, "%.1fm", up_dis.current_value / 10.0);
            lv_label_set_text(p->leg_1_level_label, temp);
            if (up_dis.current_value == 0)
            {
                lv_obj_add_flag(p->leg_1_level_label, LV_OBJ_FLAG_HIDDEN);
            }else
            {
                lv_obj_clear_flag(p->leg_1_level_label, LV_OBJ_FLAG_HIDDEN);
            }
        }

        if(right_dis.different_flag)
        {
            sprintf(temp, "%.1fm", right_dis.current_value / 10.0);
            lv_label_set_text(p->leg_2_level_label, temp);
            if (right_dis.current_value == 0)
            {
                lv_obj_add_flag(p->leg_2_level_label, LV_OBJ_FLAG_HIDDEN);
            }else
            {
                lv_obj_clear_flag(p->leg_2_level_label, LV_OBJ_FLAG_HIDDEN);
            }
        }

        if(down_dis.different_flag)
        {
            sprintf(temp, "%.1fm", down_dis.current_value / 10.0);
            lv_label_set_text(p->leg_3_level_label, temp);
            if (down_dis.different_flag == 0)
            {
                lv_obj_add_flag(p->leg_3_level_label, LV_OBJ_FLAG_HIDDEN);
            }else
            {
                lv_obj_clear_flag(p->leg_3_level_label, LV_OBJ_FLAG_HIDDEN);
            }
        }

        if(left_dis.different_flag)
        {
            sprintf(temp, "%.1fm", left_dis.current_value / 10.0);
            lv_label_set_text(p->leg_4_level_label, temp);
            if (left_dis.current_value == 0)
            {
                lv_obj_add_flag(p->leg_4_level_label, LV_OBJ_FLAG_HIDDEN);
            }else
            {
                lv_obj_clear_flag(p->leg_4_level_label, LV_OBJ_FLAG_HIDDEN);
            }
        }

        //感叹号显示
        if(danger_edge.different_flag)
        {
            if (danger_edge.current_value == 0 || danger_edge.current_value > 4)
            {
                lv_obj_add_flag(p->warning_icon[0], LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(p->warning_icon[1], LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(p->warning_icon[2], LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(p->warning_icon[3], LV_OBJ_FLAG_HIDDEN);
            }
            else
            {
                for(int i =0; i <4 ; i++)
                {
                    if (i == danger_edge.current_value -1)
                    {
                        lv_obj_clear_flag(p->warning_icon[i], LV_OBJ_FLAG_HIDDEN);
                    }
                    else
                    {
                        lv_obj_add_flag(p->warning_icon[i], LV_OBJ_FLAG_HIDDEN);
                    }
                }
            }
        }

//        if (anystate_flag)
//        {
//            lv_line_set_points(p->line_cycle, line_points, 73);
//        }
//        //回转
//        lv_img_set_angle(p->bus_cycle_any, arm0_status);
    }
    else
    {
        lv_obj_add_flag(p->warning_icon[0], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning_icon[1], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning_icon[2], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->warning_icon[3], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_1_level_label, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_2_level_label, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_3_level_label, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_4_level_label, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_length[0], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_length[1], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_length[2], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_length[3], LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_1, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_2, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_3, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->leg_4, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->bus_cycle_any, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->line_cycle, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->any_state_busbg, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->coord_bg, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_1_short, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_2_short, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_5_long, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_leg_6_long, LV_OBJ_FLAG_HIDDEN);

        lv_obj_clear_flag(p->bus_state_bg, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->bus_cycle, LV_OBJ_FLAG_HIDDEN);
        for(int i = 0 ; i < 12 ; i++)
        {
            lv_obj_clear_flag(p->label_angle[i], LV_OBJ_FLAG_HIDDEN);
        }
        lv_obj_clear_flag(p->bus_cycle, LV_OBJ_FLAG_HIDDEN);
        if (support_mode.current_value == 1)
        { //全支撑模式
            lv_img_set_src( p->bus_state_bg, &bus_state3 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 2)
        { //左支撑模式
            lv_img_set_src( p->bus_state_bg, &bus_state7 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_6_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 3)
        { //右支撑模式
            lv_img_set_src( p->bus_state_bg, &bus_state4 );

            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_5_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 4)
        { //前支撑模式
            lv_img_set_src( p->bus_state_bg, &bus_state5 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_5_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_6_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 6)
        {//一级腿
            lv_img_set_src( p->bus_state_bg, &bus_state6 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_short, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_short, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 7)
        {//左前
            lv_img_set_src( p->bus_state_bg, &bus_state2 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_6_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 8)
        {//右前
            lv_img_set_src( p->bus_state_bg, &bus_state1 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_5_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 9)
        {//两级腿
            lv_img_set_src( p->bus_state_bg, &bus_state6 );

            if(leg_left_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_1_short, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_left_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_3_long, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_up_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_2_short, LV_OBJ_FLAG_HIDDEN);
            }
            if(leg_right_down_collapse.current_value == 1)
            {
                lv_obj_clear_flag(p->red_leg_4_long, LV_OBJ_FLAG_HIDDEN);
            }
        }
        else if (support_mode.current_value == 0)
        { //无支撑模式
            lv_img_set_src( p->bus_state_bg, &bus_state0 );
        }

        //回转
        lv_img_set_angle(p->bus_cycle, arm0_status.current_value);
    }
#pragma endregion 任意支撑

    safe_k =  lv_subject_get_int_from_type(subject, antipping_safe_k, 0, pageid_antipping);
    //安全系数
    if(support_mode.current_value == 10)
    {
        lv_obj_clear_flag(p->danger_mode_icon, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(p->safety_bg, LV_OBJ_FLAG_HIDDEN);
        if(safe_k.different_flag)
        {
            if(safe_k.current_value > 200)
            {
                safe_k.current_value = 200;
            }
            if(safe_k.current_value == 0)
            {
                lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
            }
            if(safe_k.current_value >= 100 && safe_k.current_value <= 110)
            {
                lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_clear_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
                lv_img_set_src(p->danger_mode_icon, &mode_icon3);

                lv_obj_set_size(p->red_obj, 50, 300*(safe_k.current_value - 100)/100.0 );
                lv_obj_set_pos(p->red_obj, 670, 80 + 195 + 75 + (30 - 300*(safe_k.current_value - 100)/100.0)) ;
            }
            else if(safe_k.current_value > 110 && safe_k.current_value <= 135)
            {
                lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_clear_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_clear_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
                lv_img_set_src(p->danger_mode_icon, &mode_icon2);

                lv_obj_set_size(p->red_obj, 50, 30);
                lv_obj_set_pos(p->red_obj, 670, 80 + 195 + 75);

                lv_obj_set_size(p->yellow_obj, 50, 300*(safe_k.current_value - 110)/100.0 );
                lv_obj_set_pos(p->yellow_obj, 670, 80 + 195 + (75 - 300*(safe_k.current_value - 110)/100.0)) ;
            }
            else if(safe_k.current_value > 135 && safe_k.current_value <= 200)
            {
                lv_obj_clear_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_clear_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
                lv_obj_clear_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
                lv_img_set_src(p->danger_mode_icon, &mode_icon1);

                lv_obj_set_size(p->red_obj, 50, 30);
                lv_obj_set_pos(p->red_obj, 670, 80 + 195 + 75);

                lv_obj_set_size(p->yellow_obj, 50, 75);
                lv_obj_set_pos(p->yellow_obj, 670, 80 + 195);

                lv_obj_set_size(p->green_obj, 50, 300*(safe_k.current_value - 135)/100.0);
                lv_obj_set_pos(p->green_obj, 670, 80 + (195 - 300*(safe_k.current_value - 135)/100.0));
            }
        }
    }
    else
    {
        lv_obj_add_flag(p->danger_mode_icon, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->safety_bg, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->green_obj, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->yellow_obj, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(p->red_obj, LV_OBJ_FLAG_HIDDEN);
    }
}

