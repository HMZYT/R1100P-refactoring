#include "language_control.h"
#include "lv_i18n.h"

#define SIZE_OF_INFO_DETAIL 100

const char* language_type_info[End_Flag] = {
    "zh-cn",
    "en-GB",
};

typedef struct {
    lv_obj_t* label_obj;
    char* label_info;
}language_label_info;

const char* language_current = "zh-cn";
int16_t nindex = 0;
static language_label_info info_detail[SIZE_OF_INFO_DETAIL];

void language_set_current_lang(int32_t num)
{
    if (num < End_Flag)
    {
        language_current = language_type_info[num];
    }  
}

void language_set_current_label(lv_obj_t* obj_label, char* info_label)
{
    lv_i18n_init(lv_i18n_language_pack);
    lv_i18n_set_locale(language_current);
    lv_label_set_text(obj_label, _(info_label));
    info_detail[nindex].label_obj = obj_label;
    info_detail[nindex].label_info = info_label;
    nindex++;
}

void language_clear_label_list()
{
    lv_memset(&info_detail, 0, sizeof(info_detail));
    nindex = 0;
}

void language_change_callback()
{
    if (language_current == NULL)
    {
        return;
    }

    lv_i18n_set_locale(language_current);
    for (int i = 0; i < nindex; i++)
    {
        const char* temp = _(info_detail[i].label_info);
        if (lv_obj_check_type(info_detail[i].label_obj, &lv_label_class))
        {
            lv_label_set_text(info_detail[i].label_obj, temp);
        }
    }
}
