//
// Created by wpl on 2024/4/24.
//

#ifndef LVGL_UISUBJECTS_H
#define LVGL_UISUBJECTS_H

#include "lvgl/lvgl.h"
#include <iostream>

using namespace std;

class UiSubjects {
public:
    UiSubjects();
    ~UiSubjects();

public:
   void uiSubjectsInit();
    lv_subject_t* getSubjectsParas();
   int ui_data_get_int(uint32_t id);
   void ui_data_set_int(uint32_t id, uint32_t value);
   void ui_data_set_int(uint32_t id, uint32_t idx, uint32_t value);
   void ui_data_set_subject_int(lv_subject_t *subject, uint32_t value);
   void ui_update_int(uint32_t id, uint32_t value);
   void ui_update_string(uint32_t id, const char* str, uint32_t len);

private:
    lv_subject_t *paras;
};
extern UiSubjects uiSubjects;

#endif //LVGL_UISUBJECTS_H
