#ifndef LVGL_UISTARTUP_H
#define LVGL_UISTARTUP_H

#ifdef __cplusplus
extern "C"{
#endif
#include "lvgl/lvgl.h"

extern lv_subject_t subject_home_all;
extern lv_subject_t subject_system;
extern lv_subject_t subject_header;
extern lv_subject_t subject_footer;
extern lv_subject_t subject_rc_all;
extern lv_subject_t subject_faults_all;
extern lv_subject_t subject_antipping_all;
extern lv_subject_t subject_factory_all;
extern lv_subject_t subject_note_all;
extern lv_subject_t subject_arms_all;
extern void uiRun();

#ifdef __cplusplus
}
#endif
#endif //LVGL_UISTARTUP_H
