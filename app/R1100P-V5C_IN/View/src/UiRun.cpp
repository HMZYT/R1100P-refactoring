//
// Created by wpl on 2024/4/25.
//
#include "../inc/UiRun.h"
#include "../inc/UiSubjects.h"
#include "../inc/ModeManage.h"
#include "../inc/working_page_antipping.h"
#include "../inc/working_page_home.h"
#include "../inc/working_page_faults.h"

void uiRun()
{
    //观察者初始化
    uiSubjects.uiSubjectsInit();

    //创建窗口
    rc_lcd_mode_t modeIndex = e_rc_lcd_working;
    int  pageIndex = 2;

    irc_lcd_widget_t working_widget;
    irc_lcd_widget_t idle_widget;
    ModeManage modeManage(&idle_widget, idle_widget_init);
    modeManage.mode_manage_add_widget(&working_widget, working_widget_init);
    PAGE home_page;
    PAGE antipping_page;
    PAGE faults_page;
    PageManage pageManage(&home_page, working_page_home_init);
    pageManage.page_manage_add_page(&antipping_page, 1, working_page_antipping_init);
    pageManage.page_manage_add_page(&faults_page, 1, working_page_faults_init);

    lv_obj_t *temp_widget = modeManage.mode_manage_switch_widget(modeIndex);//选择模式
    pageManage.page_manage_switch_page(pageIndex,temp_widget);
}

