//
// Created by wpl on 2024/4/24.
//

#include "../inc/PageManage.h"
#include "../inc/working_page_home.h"
#include "../inc/UiSubjectsWrapper.h"
#include "../inc/sysparas_defs.h"
#include "../inc/UiRun.h"

PageManage::PageManage(PAGE* home_page, lv_obj_t* (*init)(lv_obj_t* page))
{
    home_page->pageID = 0;
    home_page->init = init;
    curr_page = NULL;
    pageList.push_back(home_page);
}

PageManage::~PageManage()
{

}

void PageManage::page_manage_add_page(PAGE* page, int id, lv_obj_t* (*init)(lv_obj_t* page))
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
            if(curr_page != nullptr)
            {
                lv_obj_delete_async(curr_page);
                switch (last_id) {
                    case working_page_home:
                        lv_subject_remove_all_obj(&subject_home_all, curr_page);
                        break;
                    case working_page_antipping:
                        lv_subject_remove_all_obj(&subject_antipping_all, curr_page);
                        break;
                    case working_page_faults:
                        lv_subject_remove_all_obj(&subject_faults_all, curr_page);
                        break;
                    case working_page_rc:
                        lv_subject_remove_all_obj(&subject_rc_all, curr_page);
                        break;
                    case working_page_note:
                        lv_subject_remove_all_obj(&subject_note_all, curr_page);
                        break;
                    default:
                        break;
                }
            }
            curr_page = page->init(ipage);
            last_id = id;
            break;
        }
    }
}
