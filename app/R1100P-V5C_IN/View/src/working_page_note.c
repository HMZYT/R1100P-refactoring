#include "../inc/working_page_note.h"
#include "../inc/images_v4_0.h"
#include "../../res/fonts/language_control.h"
#include "../inc/UiRun.h"
#include "../inc/working_page_home.h"
#include "../inc/UiSubjectsWrapper.h"
#include "../../theme/inc/theme_R1100P_white.h"
#include "../../theme/inc/theme_style.h"

#define LANGUAGE_NUMBER 2

static void note_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject);

lv_obj_t *button_lang[LANGUAGE_NUMBER];
lv_obj_t *language_list;

lv_obj_t* working_page_note_init(lv_obj_t *page)
{
    //主题初始化
    theme_R1100P_white_init();
    theme_style_init();

    working_page_note_t *p = lv_malloc(sizeof (working_page_note_t));

    uint16_t parent_width, parent_height;

    parent_width = lv_disp_get_hor_res(NULL);
    parent_height = lv_disp_get_ver_res(NULL);

    lv_obj_t *obj = lv_obj_create(page);
    lv_obj_set_size(obj, parent_width, parent_height - 40 - 40);
    lv_obj_set_pos(obj, 0, 40);
    lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    //排量
    lv_obj_t *temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &current_level);
    lv_obj_set_pos(temp_obj, 30 +3, 10);
    lv_img_set_zoom(temp_obj, 320);


    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &watercold);
    lv_obj_set_pos(temp_obj, 30-3, 10 + 1*50 -3);
    lv_img_set_zoom(temp_obj, 200);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &qiangli);
    lv_obj_set_pos(temp_obj, 30 -6, 10 -8 + 2*50 - 3);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &shutong);
    lv_obj_set_pos(temp_obj, 30 -6, 10 -8 + 3*50 - 4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &eco_green);
    lv_obj_set_pos(temp_obj, 30 + 1, 10 + 4*50 - 6);
    lv_img_set_zoom(temp_obj, 200);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &bump_oil);
    lv_obj_set_pos(temp_obj, 30 + 1, 10 + 5*50 -10 );
    lv_img_set_zoom(temp_obj, 180);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &img_language);
    lv_obj_set_pos(temp_obj, 30 + 1, 10 + 6*50);
    lv_img_set_zoom(temp_obj, 220);

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  80, 10 + 0*50);
    language_lv_label_set_text(temp_obj, "label_08");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  80, 10 + 1*50);
    language_lv_label_set_text(temp_obj, "label_09");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  80, 10 + 2*50);
    language_lv_label_set_text(temp_obj, "label_10");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  80, 10 + 3*50);

    language_lv_label_set_text(temp_obj, "label_11");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  80, 10 + 4*50);
    language_lv_label_set_text(temp_obj, "label_12");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  80, 10 + 5*50);
    language_lv_label_set_text(temp_obj, "label_13");

    temp_obj = lv_label_create(obj);

    lv_obj_set_pos(temp_obj, 80, 10 + 6 * 50);
    language_lv_label_set_text(temp_obj, "label_03");

    p->language_label = lv_label_create(obj);
    lv_obj_set_pos(p->language_label, 80+130, 10 + 6 * 50);
    lv_obj_add_style(p->language_label, theme_style_get_label_normal_24px_0(), 0);
    language_lv_label_set_text(p->language_label, "label_04");


#pragma region 语言列表
    static lv_style_t styleList;
    lv_style_init(&styleList);
    lv_style_set_text_font(&styleList, &working_mode_24px);

    language_list = lv_list_create(obj);
    lv_obj_set_size(language_list, 300, 100 * 2);
    button_lang[0] = lv_list_add_btn(language_list, NULL, "中文");
    button_lang[1] = lv_list_add_btn(language_list, NULL, "English");
    lv_obj_set_style_bg_opa(button_lang[1], 255, 0);
    lv_obj_set_style_bg_opa(button_lang[0], 255, 0);
    lv_obj_set_style_bg_opa(language_list, 255, 0);
    lv_obj_set_style_border_opa(language_list, 255, 0);
    lv_obj_set_style_border_width(language_list, 2, 0);
    lv_obj_align(language_list,  LV_ALIGN_CENTER, 0, 0);
    //lv_obj_add_flag(language_list, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_style(language_list, &styleList, 0);
    lv_group_remove_obj(language_list);
#pragma endregion 语言列表

    //第二列
    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &duguan);
    lv_obj_set_pos(temp_obj, 570 - 8 -110  , 10 +8 -4 );

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &liao_3);
    lv_obj_set_pos(temp_obj, 570 - 8 -110, 10 -10+ 1*50 -4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &liao_1);
    lv_obj_set_pos(temp_obj, 570 - 8 -110, 10-10 + 2*50 -4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &liao_2);
    lv_obj_set_pos(temp_obj, 570 - 8 -110, 10 -10 + 3*50 -4);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &arm_oil);
    lv_obj_set_pos(temp_obj, 570 - 8 -110, 10 -10 + 4*50 -5);
    lv_img_set_zoom(temp_obj, 180);

    temp_obj = lv_img_create(obj);
    lv_img_set_src(temp_obj, &img_arm_lock);
    lv_obj_set_pos(temp_obj, 570 - 28 -110, 10 + 5*50 -14);
    lv_img_set_zoom(temp_obj, 180);

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  620 -110, 10 + 0*50);
    language_lv_label_set_text(temp_obj, "label_14");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  620 -110, 10 + 1*50);
    language_lv_label_set_text(temp_obj, "label_15");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  620 -110, 10 + 2*50);
    language_lv_label_set_text(temp_obj, "label_16");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  620 -110, 10 + 3*50);
    language_lv_label_set_text(temp_obj, "label_17");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  620 -110, 10 + 4*50);
    language_lv_label_set_text(temp_obj, "label_18");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  620 -110, 10 + 5*50);
    language_lv_label_set_text(temp_obj, "label_19");

    temp_obj = lv_label_create(obj);
    lv_obj_set_pos(temp_obj,  625 , 360);
    lv_label_set_text(temp_obj, "R_016ZNV2B.1");

    //观察者模式
    lv_subject_add_observer_obj(&subject_note_all, note_observer_list_cb, page, NULL);

    return obj;
}

static void note_observer_list_cb(lv_observer_t *observer, lv_subject_t *subject)
{
    lv_subject_t* note_lock_flag;
    lv_subject_t* language_set;
    lv_subject_t* powerkey;
    lv_subject_t* language_current;
    note_lock_flag = lv_subject_get_group_element(subject,0);
    language_set = lv_subject_get_group_element(subject,1);
    powerkey = lv_subject_get_group_element(subject,2);
    language_current = lv_subject_get_group_element(subject,3);


    if (lv_subject_get_previous_int(language_current) != lv_subject_get_int(language_current))
    {
        working_page_note_t *p = lv_malloc(sizeof (working_page_note_t));
        if (lv_subject_get_int(language_current) < 0)
        {
            lv_subject_set_int(language_current, 0);
        }
        else if (lv_subject_get_int(language_current) > LANGUAGE_NUMBER-1)
        {
            lv_subject_set_int(language_current, LANGUAGE_NUMBER-1);
        }

        if (selected_language == 0)
        {
            lv_label_set_text(p->language_label,"中文");
        }
        else if (selected_language == 1){

            lv_label_set_text(p->language_label,"English");
        }
    }

    if (lv_subject_get_int(note_lock_flag))
    {
        int lang = 0;
        lv_obj_clear_flag(language_list, LV_OBJ_FLAG_HIDDEN);

        for(int i = 0; i < LANGUAGE_NUMBER;i++)
        {
            if(i == lv_subject_get_int(language_set))
            {
                lv_obj_set_style_bg_color(button_lang[lv_subject_get_int(language_set)], lv_color_make(0x00, 0xff, 0x00), 0);
            }
            else
            {
                lv_obj_set_style_bg_color(button_lang[i], lv_color_make(0xff, 0xff, 0xff), 0);
            }
        }

        if (lv_subject_get_int(powerkey) == 0 && lv_subject_get_previous_int(powerkey)  == 1)
        {
            selected_language = lv_subject_get_int(language_set);
            lv_subject_set_int(note_lock_flag, 0);
        }
    }
    else
    {
        lv_obj_add_flag(language_list, LV_OBJ_FLAG_HIDDEN);
    }
}