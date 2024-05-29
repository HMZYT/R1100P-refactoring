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

lv_obj_t* ModeManage::mode_manage_switch_widget(int modeIndex)
{
    if(widgetsList[modeIndex] == nullptr || widgetsList[modeIndex]->init == nullptr)
        return nullptr;

    if(currentModeWidget != NULL)
        lv_obj_delete_async(currentModeWidget);

    currentModeWidget =  widgetsList[modeIndex]->init();

    return currentModeWidget;
}