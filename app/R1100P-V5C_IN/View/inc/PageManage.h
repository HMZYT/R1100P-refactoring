//
// Created by wpl on 2024/4/24.
//

#ifndef LVGL_PAGEMANAGE_H
#define LVGL_PAGEMANAGE_H

#include "lvgl/lvgl.h"
#include <iostream>
#include <vector>

using namespace std;

typedef struct
{
    int  pageID;             //pageID 每个页面有唯一的ID
    void (*init)(lv_obj_t* page);         //页面初始化
}PAGE;

class PageManage {
public:
    PageManage(PAGE* home_page, void (*init)(lv_obj_t* page));
    ~PageManage();

public:
    void page_manage_add_page(PAGE* page, int  id, void(*init)(lv_obj_t* page));
    void page_manage_switch_page(int id,  lv_obj_t *base );

private:
    lv_obj_t * curr_page;
    vector<PAGE *> pageList;
};

#endif //LVGL_PAGEMANAGE_H
