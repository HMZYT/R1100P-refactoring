//
// Created by wpl on 2024/4/25.
//
#include "../inc/UiRun.h"
#include "../inc/UiSubjects.h"
#include "../inc/ModeManage.h"
#include "../inc/working_page_antipping.h"
#include "../inc/working_page_home.h"
#include "../inc/working_page_faults.h"
#include "../inc/working_page_rc.h"
#include "../inc/working_page_note.h"
#include "../inc/idle_page_black.h"
#include "../inc/fact_page_version.h"
#include "../inc/fact_page_align.h"
#include "../inc/fact_page_align_displacement.h"
#include "../inc/fact_page_full_color.h"
#include "../inc/fact_page_touch.h"
#include "../inc/off_charging_page_charging.h"
#include "../inc/prepared_page_rc.h"

void uiRun()
{
    //观察者初始化
    uiSubjects.uiSubjectsInit();

    //创建窗口
    rc_lcd_mode_t modeIndex = e_rc_lcd_working;
    int  pageIndex = 0;

    irc_lcd_widget_t idle_widget;
    irc_lcd_widget_t working_widget;
    irc_lcd_widget_t factory_widget;
    irc_lcd_widget_t offChargint_widget;
    irc_lcd_widget_t prepared_widget;
    ModeManage modeManage(&idle_widget, idle_widget_init);
    modeManage.mode_manage_add_widget(&working_widget, working_widget_init);
    modeManage.mode_manage_add_widget(&factory_widget, rc_lcd_factory_widget_init);
    modeManage.mode_manage_add_widget(&offChargint_widget, rc_lcd_off_charging_widget_init);
    modeManage.mode_manage_add_widget(&prepared_widget, prepared_widget_init);
    PAGE working_home_page;
    PAGE working_antipping_page;
    PAGE working_faults_page;
    PAGE working_rc_page;
    PAGE working_note_page;
    PAGE idle_black_page;
    PAGE fact_version_page;
    PAGE fact_algin_page;
    PAGE fact_algin_displacement_page;
    PAGE fact_page_full_color;
    PAGE fact_page_touch;
    PAGE off_charging_page;
    PAGE prepared_page;
    PageManage pageManage(&working_home_page, working_page_home_init);
    pageManage.page_manage_add_page(&working_antipping_page, 1, working_page_antipping_init);
    pageManage.page_manage_add_page(&working_faults_page, 2, working_page_faults_init);
    pageManage.page_manage_add_page(&working_rc_page, 3, working_page_rc_init);
    pageManage.page_manage_add_page(&working_note_page, 4, working_page_note_init);
    pageManage.page_manage_add_page(&idle_black_page, 5, idle_page_black_init);
    pageManage.page_manage_add_page(&fact_version_page, 6, fact_page_version_init);
    pageManage.page_manage_add_page(&fact_algin_page, 7, fact_page_algin_init);
    pageManage.page_manage_add_page(&fact_algin_displacement_page, 8, fact_page_algin_displacement_init);
    pageManage.page_manage_add_page(&fact_page_full_color, 9, fact_page_full_color_init);
    pageManage.page_manage_add_page(&fact_page_touch, 10, fact_page_touch_init);
    pageManage.page_manage_add_page(&off_charging_page, 11, off_charging_page_charging_init);
    pageManage.page_manage_add_page(&prepared_page, 12, prepared_page_rc_create);

    lv_obj_t *temp_widget = modeManage.mode_manage_switch_widget(modeIndex);//选择模式
    pageManage.page_manage_switch_page(pageIndex,temp_widget);
}
