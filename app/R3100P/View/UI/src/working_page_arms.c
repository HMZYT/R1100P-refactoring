#include "../inc/working_page_arms.h"
#include "../../theme/inc/theme_R1100P_white.h"
#include "../../theme/inc/theme_style.h"
#include "../../User/inc/images_v4_0.h"

static lv_style_t style8;

static void arms_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_obj_t* working_page_arms_init(lv_obj_t *page)
{
    //主题初始化
    theme_R1100P_white_init();
    theme_style_init();
    working_page_arms_t *p = lv_malloc(sizeof (working_page_arms_t));

    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    int i;

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 60 - 60);
    lv_obj_set_pos(obj, 0, 60);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);


    static lv_style_t style_mode_bg;
    lv_style_init(&style_mode_bg);
    lv_style_set_bg_color(&style_mode_bg, lv_color_make(0xff, 0xff, 0xff));
    lv_style_set_border_width(&style_mode_bg, 2);
    lv_style_set_border_color(&style_mode_bg, lv_color_make(0xde, 0xde, 0xde));
    lv_style_set_bg_opa(&style_mode_bg, LV_OPA_COVER);

    lv_obj_t *g1 = lv_obj_create(obj);
    lv_obj_t *g2 = lv_obj_create(obj);

    lv_obj_set_size(g1, 616, 574);
    lv_obj_set_size(g2, 616, 574);

    lv_obj_set_pos(g1, 16,10);
    lv_obj_set_pos(g2, 648,10);

    //隐藏不选中
    p->mode_bg[0] = lv_obj_create(obj);
    lv_obj_set_size(p->mode_bg[0], 192, 240);
    lv_obj_set_pos(p->mode_bg[0], 27 , 135 - 60);
    lv_obj_add_style(p->mode_bg[0], &style_mode_bg, 0);
    lv_obj_add_flag( p->mode_bg[0], LV_OBJ_FLAG_HIDDEN );

    //状态小背景
    for(i = 1; i < 4; i++ )
    {
        p->mode_bg[i] = lv_obj_create(obj);
        lv_obj_set_size(p->mode_bg[i], 192, 240);
        lv_obj_set_pos(p->mode_bg[i], 28 + ( (i - 1) * 200), 135 - 60);
        lv_obj_add_style(p->mode_bg[i], &style_mode_bg, 0);
    }

    for(i = 4; i < 7; i++ )
    {
        p->mode_bg[i] = lv_obj_create(obj);
        lv_obj_set_size(p->mode_bg[i], 192, 240);
        lv_obj_set_pos(p->mode_bg[i], 28 + ( (i - 4) * 200), 391 - 60);
        lv_obj_add_style(p->mode_bg[i], &style_mode_bg, 0);
    }

    lv_obj_t *temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_state1);
    lv_obj_set_pos(temp_state, 27, 135 - 60);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "最小姿态" );
    lv_obj_set_pos(temp_state, 75, 332 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_state2);
    lv_obj_set_pos(temp_state, 227, 135 - 60);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "打底板" );
    lv_obj_set_pos(temp_state, 287 , 332 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_state3);
    lv_obj_set_pos(temp_state, 427, 135 - 60);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "打高楼" );
    lv_obj_set_pos(temp_state, 499, 332 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_state4);
    lv_obj_set_pos(temp_state, 27, 391 - 60);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "存储姿态1" );
    lv_obj_set_pos(temp_state, 80, 591 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_state5);
    lv_obj_set_pos(temp_state, 227, 391 - 60);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "存储姿态2" );
    lv_obj_set_pos(temp_state, 280, 589 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_state6);
    lv_obj_set_pos(temp_state, 427, 391 - 60);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "自定义1" );
    lv_obj_set_pos(temp_state, 480, 589 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "目标形态" );
    lv_obj_set_pos(temp_state, 262, 83 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_32px_0(), 0);

    //临时背景图
    temp_state = lv_img_create(obj);
    lv_img_set_src(temp_state, &arms_bg);
    lv_obj_set_pos(temp_state, 707, 287 - 60);
    lv_img_set_zoom(temp_state, 300);

    p->arm_ground = lv_img_create(obj);
    //lv_img_set_src(p->arm_ground, &arm_d_0);
    lv_obj_set_pos(p->arm_ground, 400-10 +20 , 360 -30);

    p->arm_01 = lv_img_create(obj);
    //lv_img_set_src(p->arm_01, &arm_d_a);
    lv_img_set_pivot(p->arm_01, 0, 0);
    lv_obj_set_pos(p->arm_01, 418 + 20  ,357 -30);

    p->arm_02 = lv_img_create(obj);
    //lv_img_set_src(p->arm_02, &arm_d_b);
    lv_img_set_pivot(p->arm_02, 0, 0);
    lv_obj_set_pos(p->arm_02, 418 + 55  ,357);

    p->arm_03 = lv_img_create(obj);
    //lv_img_set_src(p->arm_03, &arm_d_c);
    lv_img_set_pivot(p->arm_03, 0, 0);
    lv_obj_set_pos(p->arm_03, 418 + 55 + 38  ,357 );

    p->arm_04 = lv_img_create(obj);
    //lv_img_set_src(p->arm_04, &arm_d_d);
    lv_img_set_pivot(p->arm_04, 0, 0);
    lv_obj_set_pos(p->arm_04, 418 + 55 + 38 + 36   ,357);

    p->arm_05 = lv_img_create(obj);
    //lv_img_set_src(p->arm_05, &arm_d_e);
    lv_img_set_pivot(p->arm_05, 0, 0);
    lv_obj_set_pos(p->arm_05, 418 + 55 + 38 + 36 + 33   ,357);

    p->arm_06 = lv_img_create(obj);
    //lv_img_set_src(p->arm_06, &arm_d_f);
    lv_img_set_pivot(p->arm_06, 0, 0);
    lv_obj_set_pos(p->arm_06, 418 + 55 + 38 + 36 + 33 + 29   ,357);

    p->arm_07 = lv_img_create(obj);
    //lv_img_set_src(p->arm_07, &arm_d_g);
    lv_img_set_pivot(p->arm_07, 0, 0);
    lv_obj_set_pos(p->arm_07, 418 + 55 + 38 + 36 + 33 + 29 + 27  ,357);

    p->arm_p01 = lv_img_create(obj);
    //lv_img_set_src(p->arm_p01, &arm_d_1);
    lv_obj_set_pos(p->arm_p01, 416 +20  ,355 - 30 );

    p->arm_p02 = lv_img_create(obj);
    //lv_img_set_src(p->arm_p02, &arm_d_1);
    lv_obj_set_pos(p->arm_p02, 416 + 55 ,355);

    p->arm_p03 = lv_img_create(obj);
    //(p->arm_p03, &arm_d_2);
    lv_obj_set_pos(p->arm_p03, 416 + 55 + 38  ,355);

    p->arm_p04 = lv_img_create(obj);
    //lv_img_set_src(p->arm_p04, &arm_d_2);
    lv_obj_set_pos(p->arm_p04, 416 + 55 + 38 + 36 ,355);

    p->arm_p05 = lv_img_create(obj);
    //lv_img_set_src(p->arm_p05, &arm_d_2);
    lv_obj_set_pos(p->arm_p05, 416 + 55 + 38 + 36 + 33  ,355);

    p->arm_p06 = lv_img_create(obj);
    //lv_img_set_src(p->arm_p06, &arm_d_2);
    lv_obj_set_pos(p->arm_p06, 416 + 55 + 38 + 36 + 33 + 29   ,355);

    p->arm_p07 = lv_img_create(obj);
    //lv_img_set_src(p->arm_p07, &arm_d_2);
    lv_obj_set_pos(p->arm_p07, 416  + 55 + 38 + 36 + 33 + 29 + 27 ,355);

    lv_img_set_zoom(p->arm_01, 160);
    lv_img_set_zoom(p->arm_02, 160);
    lv_img_set_zoom(p->arm_03, 160);
    lv_img_set_zoom(p->arm_04, 160);
    lv_img_set_zoom(p->arm_05, 160);
    lv_img_set_zoom(p->arm_06, 160);
    lv_img_set_zoom(p->arm_07, 160);
    lv_img_set_zoom(p->arm_p01, 160);
    lv_img_set_zoom(p->arm_p02, 160);
    lv_img_set_zoom(p->arm_p03, 160);
    lv_img_set_zoom(p->arm_p04, 160);
    lv_img_set_zoom(p->arm_p05, 160);
    lv_img_set_zoom(p->arm_p06, 160);
    lv_img_set_zoom(p->arm_p07, 160);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "实时姿态" );
    lv_obj_set_pos(temp_state, 915, 83 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_32px_0(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "末端最高：" );
    lv_obj_set_pos(temp_state,  950 , 218 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "末端最低：" );
    lv_obj_set_pos(temp_state,  950  , 260 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "末端高度：" );
    lv_obj_set_pos(temp_state, 950, 301 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    //max min
    p->label_show[0] = lv_label_create(obj);
    lv_label_set_text( p->label_show[0], "0m" );
    lv_obj_set_pos(p->label_show[0], 950 + 115 ,218 - 60);
    lv_obj_add_style(p->label_show[0],theme_style_get_label_normal_24px_1(), 0);

    p->label_show[1] = lv_label_create(obj);
    lv_label_set_text( p->label_show[1], "0m" );
    lv_obj_set_pos(p->label_show[1], 950 + 115, 260 - 60);
    lv_obj_add_style(p->label_show[1],theme_style_get_label_normal_24px_1(), 0);

    p->label_show[2] = lv_label_create(obj);
    lv_label_set_text( p->label_show[2], "0m" );
    lv_obj_set_pos(p->label_show[2], 950 + 115, 301 - 60);
    lv_obj_add_style(p->label_show[2],theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "1臂：" );
    lv_obj_set_pos(temp_state, 1141 , 260 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "2臂：" );
    lv_obj_set_pos(temp_state, 1141, 301 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "3臂：" );
    lv_obj_set_pos(temp_state, 1141 , 342 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "4臂：" );
    lv_obj_set_pos(temp_state, 1141, 384 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "5臂：" );
    lv_obj_set_pos(temp_state, 1141, 426 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "6臂：" );
    lv_obj_set_pos(temp_state, 1141, 467 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    temp_state = lv_label_create(obj);
    lv_label_set_text( temp_state, "回转：" );
    lv_obj_set_pos(temp_state, 1141 -10, 218 - 60);
    lv_obj_add_style(temp_state,theme_style_get_label_normal_24px_1(), 0);

    for (i = 3; i < 9; i++)
    {
        p->label_show[i] = lv_label_create(obj);
        lv_label_set_text( p->label_show[i], "0°" );
        lv_obj_set_pos(p->label_show[i], 1124 + 75, 260 - 60 + (i-3) * 42);
        lv_obj_add_style(p->label_show[i],theme_style_get_label_normal_24px_1(), 0);
    }

    //回转
    p->label_show[9] = lv_label_create(obj);
    lv_label_set_text( p->label_show[9], "0°" );
    lv_obj_set_pos(p->label_show[9], 1124 + 75, 218 - 60);
    lv_obj_add_style(p->label_show[9],theme_style_get_label_normal_24px_1(), 0);

    return obj;
}