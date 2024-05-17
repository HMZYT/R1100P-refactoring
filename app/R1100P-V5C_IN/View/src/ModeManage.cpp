#include "../inc/ModeManage.h"
#include "../inc/working_page_home.h"
#include "../inc/working_page_antipping.h"

ModeManage::ModeManage(irc_lcd_widget_t *modeWidget, lv_obj_t* (*init)())
{
    modeWidget->init = init;
    currentModeWidget = NULL;
    widgetsList.push_back(modeWidget);
}
ModeManage::~ModeManage()
{
}

void ModeManage::mode_manage_add_widget(irc_lcd_widget_t *modeWidget,lv_obj_t* (*init)())
{
    modeWidget->init = init;
    widgetsList.push_back(modeWidget);
}

lv_obj_t* ModeManage::mode_manage_switch_widget(rc_lcd_mode_t modeIndex)
{
    if(widgetsList[modeIndex] == nullptr || widgetsList[modeIndex]->init == nullptr)
        return nullptr;

    if(currentModeWidget != NULL)
        lv_obj_delete_async(currentModeWidget);

    currentModeWidget =  widgetsList[modeIndex]->init();

    return currentModeWidget;
//
//    switch (modeIndex)
//    {
//        case e_rc_lcd_idle:
//            break;
//        case e_rc_lcd_working:
//            working_manage_pages_create(currentModeWidget);
//            break;
//    }
}


void ModeManage::mode_manage_switch_page(int nPageIndex)
{
    //pageMnage.page_manage_switch_page(nPageIndex);
}