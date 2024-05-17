//
// Created by wpl on 2024/4/24.
//

#include "../inc/PageManage.h"
#include "../inc/working_page_home.h"

PageManage::PageManage(PAGE* home_page, void (*init)(lv_obj_t* page))
{
    home_page->pageID = 0;
    home_page->init = init;
    curr_page = NULL;
    pageList.push_back(home_page);
}

PageManage::~PageManage()
{

}

void PageManage::page_manage_add_page(PAGE* page, int id, void (*init)(lv_obj_t* page))
{
    page->pageID = id;
    page->init = init;
    pageList.push_back(page);
}

void PageManage::page_manage_switch_page(int id, lv_obj_t *ipage)
{
    int i;
    for (i = 0; i < pageList.size(); i++)
    {
        PAGE* page = pageList[i];
        if (page->pageID == id)
        {
            if(curr_page != NULL)
                lv_obj_delete_async(curr_page);
            page->init(ipage);


            break;
        }
    }


}
