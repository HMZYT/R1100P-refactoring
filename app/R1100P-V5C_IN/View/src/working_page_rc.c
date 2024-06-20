#include "../inc/working_page_rc.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "../inc/images_v4_0.h"
#include "../inc/working_page_home.h"
#include "../inc/UiRun.h"
#include "../../theme/inc/theme_R1100P_white.h"

int bg_light_level = 100;

static rocker_t *_create_rocker(lv_obj_t *parent);
static rc_lcd_button_t *_create_button(lv_obj_t *parent);
static void _button_set_v(rc_lcd_button_t *btn, uint8_t v);                //二选一或三选一开关设置
static void _button_side_set_clicked(lv_obj_t *btn, bool clicked);         //侧边按键设置
static void _button_lock_arm_set_v(lv_obj_t *btn, lv_obj_t *l, uint8_t v); //锁臂按键设置
static void _set_displacement(lv_obj_t *btn, lv_obj_t *label, uint8_t v);  //排量设置
static void _set_rocker(rocker_t *rocker, uint8_t v);

static void rc_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_obj_t* working_page_rc_init(lv_obj_t *page)
{
    //主题初始化
    theme_R1100P_white_init();

    working_page_rc_t *p = lv_malloc(sizeof (working_page_rc_t));

    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 40 - 40);
    lv_obj_set_pos(obj, 0, 40);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    int i = 0;
    for (i = 0; i < 6; ++i)
    {
        p->rockers[i] = _create_rocker(obj);
        lv_obj_set_size(p->rockers[i]->ibase, 73, 118);
        lv_obj_set_pos(p->rockers[i]->ibase, 95 + 108 * i, 118 - 40);

        p->up[i] = lv_label_create(obj);
        p->down[i] = lv_label_create(obj);

        lv_obj_set_pos(p->up[i], 149 + 108 * i, 57);
        lv_obj_add_flag( p->up[i], LV_OBJ_FLAG_HIDDEN );
        lv_label_set_text( p->up[i], "127" );

        lv_obj_set_pos(p->down[i], 149 + 108 * i, 180);
        lv_obj_add_flag( p->down[i], LV_OBJ_FLAG_HIDDEN );
        lv_label_set_text( p->down[i], "-127" );
    }

    for (i = 0; i < 5; ++i)
    {
        p->btns[i] = _create_button(obj);
        lv_obj_set_size(p->btns[i]->ibase, 55, 51);
        lv_obj_set_pos(p->btns[i]->ibase, 53 + 72 * i, 329 - 40 +3);
        _button_set_v(p->btns[i], 0);
    }

    p->btn_lock_arms = lv_image_create(obj);
    lv_image_set_src(p->btn_lock_arms, &control_cycle_Sbtn);
    lv_obj_set_pos(p->btn_lock_arms, 500 + 20, 337 + 10- 30);
    lv_obj_set_size(p->btn_lock_arms, 44, 44);

//    lv_obj_t *btn_displacement_bg = lv_image_create(obj);
//    lv_image_set_src(btn_displacement_bg, &control_cycle_Sbtn_bg);
//    lv_obj_set_pos(btn_displacement_bg, 616 + 15, 325 - 30);
//    lv_obj_set_size(btn_displacement_bg, 60, 60);

    p->btn_replacement = lv_image_create(obj);
    lv_image_set_src(p->btn_replacement, &control_cycle_Bbtn2);
    lv_obj_set_pos(p->btn_replacement, 616+15, 325 - 30);
    lv_obj_set_size(p->btn_replacement, 60, 60);

    p->btn_whistle = lv_image_create(obj);
    lv_image_set_src(p->btn_whistle, &control_margin_02);
    lv_obj_set_pos(p->btn_whistle, parent_width - 20, 108 - 40);
    lv_obj_set_size(p->btn_whistle, 20, 54);

    p->btn_emergency = lv_image_create(obj);
    lv_image_set_src(p->btn_emergency, &control_margin_02);
    lv_obj_set_pos(p->btn_emergency, parent_width - 20, 68 + 240 + 30 );
    lv_obj_set_size(p->btn_emergency, 20, 54);

    p->label_emergency = lv_label_create(obj);
    lv_obj_set_pos( p->label_emergency, parent_width - 75, 68 + 250 + 35 );
    lv_label_set_text( p->label_emergency, "急停" );

    p->btn_stop = lv_image_create(obj);
    lv_image_set_src(p->btn_stop, &control_margin_02);
    lv_obj_set_pos(p->btn_stop, 0, 108 - 40);
    lv_obj_set_size(p->btn_stop, 20, 54);

    lv_obj_t *tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_motor_stop );
    lv_obj_set_pos( tmp_label, 20, 108 - 35);

    p->btn_start = lv_image_create(obj);
    lv_image_set_src(p->btn_start, &control_margin_02);
    lv_obj_set_pos(p->btn_start, 0, 158);
    lv_obj_set_size(p->btn_start, 20, 54);

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_motor_start );
    lv_obj_set_pos( tmp_label, 20, 163 );

    p->label_lock = lv_label_create(obj);
    lv_label_set_text(p->label_lock, "0");
    lv_obj_set_pos(p->label_lock, 512 + 8, 309 - 45);

    p->label_displacement = lv_label_create(obj);
    lv_label_set_text(p->label_displacement, "0");
    lv_obj_set_pos(p->label_displacement, 611 + 10, 309 - 50);
    lv_obj_set_width( p->label_displacement, 66 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &control_cycle_Bbtn1 );
    lv_obj_set_pos( tmp_label, 616 + 15, 325 - 30 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_bump );
    lv_obj_set_pos( tmp_label, 616 + 30, 355 );

    //锁臂
    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_arm_lock );
    lv_obj_set_pos( tmp_label, 512 + 10, 347 );
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &control_cycle_Sbtn_bg );
    lv_obj_set_pos( tmp_label, 500 + 2, 337 -55 + 3 );

    p->label_rig = lv_label_create( obj );
    lv_label_set_text(p->label_rig, "");
    lv_obj_set_pos(p->label_rig, 620 + 40 +20 +40 + 5 , 109 + 40 -15);

    p->label_dow = lv_label_create( obj );
    lv_label_set_text(p->label_dow, "");
    lv_obj_set_pos(p->label_dow, 655 , 109 + 50 +20 + 5  );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_a0);
    lv_obj_set_pos( tmp_label, 98 + 108 * 0, 18 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_b0);
    lv_obj_set_pos( tmp_label, 98 + 108 * 1 , 18 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_c0);
    lv_obj_set_pos( tmp_label, 98 + 108 * 2 , 18 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_d0);
    lv_obj_set_pos( tmp_label, 98 + 108 * 3 , 18 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_e0);
    lv_obj_set_pos( tmp_label, 98 + 108 * 4 , 18 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_f0);
    lv_obj_set_pos( tmp_label, 98 + 108 * 5 , 18 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_a1);
    lv_obj_set_pos( tmp_label, 98 + 108 * 0, 190 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_b1);
    lv_obj_set_pos( tmp_label, 98 + 108 * 1 , 190 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_c1);
    lv_obj_set_pos( tmp_label, 98 + 108 * 2 , 190 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_d1);
    lv_obj_set_pos( tmp_label, 98 + 108 * 3 , 190 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_e1);
    lv_obj_set_pos( tmp_label, 98 + 108 * 4 , 190 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &arm_f1);
    lv_obj_set_pos( tmp_label, 98 + 108 * 5 , 190 );
    lv_image_set_scale( tmp_label, 220 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_bump_down);
    lv_obj_set_pos( tmp_label, 56, 255 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_swing_left);
    lv_obj_set_pos( tmp_label, 122, 250 );
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &fast_mode);
    lv_obj_set_pos( tmp_label, 194 , 255 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_motor_up);
    lv_obj_set_pos( tmp_label, 265, 255 );
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_bump);
    lv_obj_set_pos( tmp_label, 340, 255 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_strong);
    lv_obj_set_pos( tmp_label, 345, 255 );
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_bump_up);
    lv_obj_set_pos( tmp_label, 56, 255 + 87 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_swing_right);
    lv_obj_set_pos( tmp_label, 122 , 255 + 87);
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &slow_mode);
    lv_obj_set_pos( tmp_label, 194, 255 + 87);

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_motor_down);
    lv_obj_set_pos( tmp_label, 265, 255 + 87);
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_bump);
    lv_obj_set_pos( tmp_label, 340, 255 + 87);

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_eco);
    lv_obj_set_pos( tmp_label, 345, 255 + 87);
    lv_image_set_scale( tmp_label, 200 );

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &horn_rc);
    lv_obj_set_pos( tmp_label, parent_width - 82, 68);

    p->btn_off = lv_image_create(obj);
    lv_image_set_src(p->btn_off, &control_margin_02);
    lv_obj_set_pos(p->btn_off, parent_width - 20, 288 - 50);
    lv_obj_set_size(p->btn_off, 20, 54);

    tmp_label = lv_image_create( obj );
    lv_image_set_src( tmp_label, &img_power_red);
    lv_obj_set_pos( tmp_label, parent_width - 70, 288 - 40);

    p->backlight_bar = lv_bar_create( obj);
    lv_bar_set_range(p->backlight_bar, 0, 100);
    lv_obj_set_pos(p->backlight_bar, 250, 6);
    lv_obj_set_size(p->backlight_bar, 300, 14);
    lv_bar_set_value(p->backlight_bar, 70, LV_ANIM_ON);
    lv_obj_add_flag( p->backlight_bar, LV_OBJ_FLAG_HIDDEN );

    //观察者模式
    lv_subject_add_observer_obj(&subject_rc_all, rc_observer_list_cb, page, p);
    return obj;
}

static void rc_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject) {
    lv_obj_t *page_rc = lv_observer_get_target_obj(observer);
    working_page_rc_t *p = (working_page_rc_t *) observer->user_data;

    char temp[64];
    temp_value_t temp_v;
    temp_value_t temp_vv;

    temp_v = lv_subject_get_int_from_type(subject, rc_flag,  0, pageid_rc);
    if(temp_v.different_flag)
    {
        if(temp_v.current_value)
        {
            lv_obj_clear_flag(p->backlight_bar,LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_add_flag(p->backlight_bar,LV_OBJ_FLAG_HIDDEN);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_armSupport, 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_rocker(p->rockers[0], temp_v.current_value);
        if (temp_v.current_value == 0 )
        {
            lv_obj_add_flag( p->up[0], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[0], LV_OBJ_FLAG_HIDDEN );
        }
        else if (temp_v.current_value <= 0x7F )
        {//下降
            lv_obj_add_flag( p->up[0], LV_OBJ_FLAG_HIDDEN );
            lv_obj_clear_flag( p->down[0], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->down[0], "-%d", temp_v.current_value);
        }
        else
        {//上升
            lv_obj_clear_flag( p->up[0], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[0], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->up[0], "%d", 0xFF - (uint8_t)temp_v.current_value + 1);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_arm1 , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_rocker(p->rockers[1], temp_v.current_value);
        if (temp_v.current_value == 0 )
        {
            lv_obj_add_flag( p->up[1], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag( p->down[1], LV_OBJ_FLAG_HIDDEN);
        }
        else if (temp_v.current_value <= 0x7F )
        {
            lv_obj_add_flag( p->up[1], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag( p->down[1], LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text_fmt( p->down[1], "-%d", temp_v.current_value);
        }
        else
        {
            lv_obj_clear_flag( p->up[1], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[1], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->up[1], "%d", 0xFF - (uint8_t)temp_v.current_value + 1);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_arm2 , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_rocker(p->rockers[2], temp_v.current_value);
        if (temp_v.current_value == 0 )
        {
            lv_obj_add_flag( p->up[2], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag( p->down[2], LV_OBJ_FLAG_HIDDEN);
        }
        else if (temp_v.current_value <= 0x7F )
        {
            lv_obj_add_flag( p->up[2], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag( p->down[2], LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text_fmt( p->down[2], "-%d", temp_v.current_value);
        }
        else
        {
            lv_obj_clear_flag( p->up[2], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[2], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->up[2], "%d", 0xFF - (uint8_t)temp_v.current_value + 1);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_arm3 , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_rocker(p->rockers[3], temp_v.current_value);
        if (temp_v.current_value == 0 )
        {
            lv_obj_add_flag( p->up[3], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag( p->down[3], LV_OBJ_FLAG_HIDDEN);
        }
        else if (temp_v.current_value <= 0x7F )
        {
            lv_obj_add_flag( p->up[3], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag( p->down[3], LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text_fmt( p->down[3], "-%d", temp_v.current_value);
        }
        else
        {
            lv_obj_clear_flag( p->up[3], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[3], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->up[3], "%d", 0xFF - (uint8_t)temp_v.current_value + 1);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_arm4 , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_rocker(p->rockers[4], temp_v.current_value);
        if (temp_v.current_value == 0 )
        {
            lv_obj_add_flag( p->up[4], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag( p->down[4], LV_OBJ_FLAG_HIDDEN);
        }
        else if (temp_v.current_value <= 0x7F )
        {
            lv_obj_add_flag( p->up[4], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag( p->down[4], LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text_fmt( p->down[4], "-%d", temp_v.current_value);
        }
        else
        {
            lv_obj_clear_flag( p->up[4], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[4], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->up[4], "%d", 0xFF - (uint8_t)temp_v.current_value + 1);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_arm5 , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_rocker(p->rockers[5], temp_v.current_value);
        if (temp_v.current_value == 0 )
        {
            lv_obj_add_flag( p->up[5], LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag( p->down[5], LV_OBJ_FLAG_HIDDEN);
        }
        else if (temp_v.current_value <= 0x7F )
        {
            lv_obj_add_flag( p->up[5], LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag( p->down[5], LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text_fmt( p->down[5], "-%d", temp_v.current_value);
        }
        else
        {
            lv_obj_clear_flag( p->up[5], LV_OBJ_FLAG_HIDDEN );
            lv_obj_add_flag( p->down[5], LV_OBJ_FLAG_HIDDEN );
            lv_label_set_text_fmt( p->up[5], "%d", 0xFF - (uint8_t)temp_v.current_value + 1);
        }
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_displacement , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _set_displacement(p->btn_replacement, p->label_displacement, temp_v.current_value);
    }

    int temp_count = 0;
    static uint8_t last_lock = 0;
    for (int nIndex = rc_1; nIndex <= rc_2_3; nIndex++)
    {
        temp_count++;
        temp_v = lv_subject_get_int_from_type(subject, nIndex , 0, pageid_rc);
        if (temp_v.current_value)
        {
            break;
        }
    }

    if (temp_count != last_lock)
    {
        _button_lock_arm_set_v(p->btn_lock_arms, p->label_lock, temp_count);
        last_lock = temp_count;
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_engine_stop , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _button_side_set_clicked(p->btn_stop, temp_v.current_value);
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_start_key , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _button_side_set_clicked(p->btn_start, temp_v.current_value);
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_horn , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _button_side_set_clicked(p->btn_whistle, temp_v.current_value);
    }

    temp_v = lv_subject_get_int_from_type(subject, rc_halt , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _button_side_set_clicked(p->btn_emergency, temp_v.current_value);
    }

    uint8_t v[ 7 ] = { 0 };
    static uint8_t last_v[ 7 ] = { 0 };

    /***************************
    * BUTTON1: 正反泵
    ***************************/
    temp_value_t temp_rc_ccw = lv_subject_get_int_from_type(subject, rc_ccw , 0, pageid_rc);
    temp_value_t temp_rc_cw = lv_subject_get_int_from_type(subject, rc_cw , 0, pageid_rc);
    if (temp_rc_ccw.current_value)
    {//下
        v[ 0 ] = 2;
    }
    else if (temp_rc_cw.current_value)
    {//上
        v[ 0 ] = 1;
    }
    else
    {//中
        v[ 0 ] = 0;
    }

    if ( v[ 0 ] != last_v[ 0 ] )
    {
        _button_set_v(p->btns[0], v[ 0 ]);
        last_v[ 0 ] = v[ 0 ];
    }

    /***************************
    * BUTTON2: 左右摆缸
    ***************************/
    temp_value_t temp_right_swing_pump = lv_subject_get_int_from_type(subject, rc_right_swing_pump , 0, pageid_rc);
    temp_value_t temp_left_swing_pump = lv_subject_get_int_from_type(subject, rc_left_swing_pump , 0, pageid_rc);
    if (temp_right_swing_pump.current_value)
    {//下
        v[ 1 ] = 2;
    }
    else if (temp_left_swing_pump.current_value)
    {//上
        v[ 1 ] = 1;
    }
    else
    {//中
        v[ 1 ] = 0;
    }

    if ( v[ 1 ] != last_v[ 1 ] )
    {
        _button_set_v(p->btns[1], v[ 1 ]);
        last_v[ 1 ] = v[ 1 ];
    }

    /***************************
    * BUTTON3: 龟兔
    ***************************/
    temp_v = lv_subject_get_int_from_type(subject, rc_slow , 0, pageid_rc);
    if (temp_v.current_value)
    {//下
        v[ 2 ] = 2;
    }
    else
    {//上
        v[ 2 ] = 1;
    }

    if (temp_v.different_flag)
    {
        _button_set_v(p->btns[2], v[ 2 ]);
    }

    /***************************
    * BUTTON4: PRM
    ***************************/
    temp_value_t temp_rpm_minus = lv_subject_get_int_from_type(subject, rc_rpm_minus , 0, pageid_rc);
    temp_value_t temp_rpm_plus = lv_subject_get_int_from_type(subject, rc_rpm_plus , 0, pageid_rc);
    if (temp_rpm_minus.current_value)
    {//下
        v[ 3 ] = 2;
    }
    else if (temp_rpm_plus.current_value)
    {//上
        v[ 3 ] = 1;
    }
    else
    {//中
        v[ 3 ] = 0;
    }

    if ( v[ 3 ] != last_v[ 3 ] )
    {
        _button_set_v(p->btns[3], v[ 3 ]);
        last_v[ 3 ] = v[ 3 ];
    }

    /***************************
    * BUTTON5: 强力、节能
    ***************************/
    temp_value_t temp_dredge = lv_subject_get_int_from_type(subject, rc_dredge , 0, pageid_rc);
    temp_value_t temp_strong_power = lv_subject_get_int_from_type(subject, rc_strong_power , 0, pageid_rc);
    if (temp_dredge.current_value)
    {//疏通
        v[ 4 ] = 0;
    }
    else if (temp_strong_power.current_value)
    {//强力
        v[ 4 ] = 1;
    }
    else
    {//节能
        v[ 4 ] = 2;
    }

    if ( v[ 4 ] != last_v[ 4 ] )
    {
        _button_set_v(p->btns[4], v[ 4 ]);
        last_v[ 4 ] = v[ 4 ];
    }

    /***************************
    * 电源按钮
    ***************************/
    temp_v = lv_subject_get_int_from_type(subject, rc_powerkey , 0, pageid_rc);
    if (temp_v.different_flag)
    {
        _button_side_set_clicked(p->btn_off, temp_v.current_value);
    }
}

static rc_lcd_button_t *_create_button(lv_obj_t *parent)
{
    rc_lcd_button_t *btn = (rc_lcd_button_t *)malloc(sizeof(rc_lcd_button_t));
    if (!btn)
    {
        return NULL;
    }

    btn->ibase = lv_label_create(parent);
    lv_label_set_text(btn->ibase, "");
    btn->v = lv_image_create(btn->ibase);
    lv_image_set_src(btn->v, &control_s_btn02);
    lv_obj_set_pos(btn->v, 0, 0);
    lv_obj_set_size(btn->v, 55, 51);
    lv_obj_remove_flag(btn->ibase, LV_OBJ_FLAG_SCROLLABLE);

    return btn;
}

//二选一或三选一开关设置
static void _button_set_v(rc_lcd_button_t *btn, uint8_t v)
{
    if (v == 0)
    { //中间
        lv_image_set_src(btn->v, &control_s_btn02);
    }
    else if (v == 1)
    { //上
        lv_image_set_src(btn->v, &control_s_btn01);
    }
    else if (v == 2)
    { //下
        lv_image_set_src(btn->v, &control_s_btn03);
    }
    else
    {
        lv_image_set_src(btn->v, &control_s_btn02);
    }
}

//侧边按键设置
static void _button_side_set_clicked(lv_obj_t *btn, bool clicked)
{
    if (clicked)
    {
        lv_image_set_src(btn, &control_margin_01);
    }
    else
    {
        lv_image_set_src(btn, &control_margin_02);
    }
}

//锁臂按键设置
static void _button_lock_arm_set_v(lv_obj_t *btn, lv_obj_t *l, uint8_t v)
{
    static const char *texts[] = {
        "0",
        "1",
        "1+2",
        "1+2+3",
        "2",
        "3",
        "2+3"};
    if (v > 6)
    {
        v = 6;
    }
    lv_label_set_text(l, texts[v]);
    //图片旋转
    lv_img_set_angle(btn, v * 257);
}

static void _set_displacement(lv_obj_t *btn, lv_obj_t *label, uint8_t v) //排量设置
{
    if (v > 127)
    {
        v = 127;
    }
    char temp[10];
    float tv = v / 12.7;
    sprintf(temp, "%.1f", tv);
    lv_label_set_text(label, temp);
    //图片旋转
    lv_img_set_angle(btn, tv * 285);
}

static void _set_rocker(rocker_t *rocker, uint8_t v)
{
    if (v == 0x00)
    { //在中间
        lv_image_set_src(rocker->v, &control_btn02);
        lv_obj_set_pos(rocker->v, 0, 34);
    }
    else if (v <= 0x7F)
    { //下降
        lv_image_set_src(rocker->v, &control_btn04);
        lv_obj_set_pos(rocker->v, 0, 34 + 25);
    }
    else
    { //上升
        lv_image_set_src(rocker->v, &control_btn03);
        lv_obj_set_pos(rocker->v, 0, 34 - 25);
    }
}

rocker_t *_create_rocker(lv_obj_t *parent)
{
    rocker_t *r = (rocker_t *)malloc(sizeof(rocker_t));
    if (!r)
    {
        return NULL;
    }

    r->ibase = lv_label_create(parent);
    lv_label_set_text(r->ibase, "");
    lv_obj_t *bg_img = lv_image_create(r->ibase);
    lv_image_set_src(bg_img, &control_btn01);
    lv_obj_set_pos(bg_img, 0, 0);
    lv_obj_set_size(bg_img, 73, 118);
    lv_obj_remove_flag(r->ibase, LV_OBJ_FLAG_SCROLLABLE);

    r->v = lv_image_create(bg_img);
    lv_image_set_src(r->v, &control_btn02);
    lv_obj_set_pos(r->v, 2, 39);
    lv_obj_set_size(r->v, 68, 42);


    return r;
}
