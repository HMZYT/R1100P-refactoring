#include "../inc/working_header.h"
#include <stdlib.h>
#include <stdio.h>
//#include "../GUI_APP/gui_user.h"
#include "../../Model/inc/data_info_v4_0.h"
#include "../inc/images_v4_0.h"
#include "../res/fonts/gui_fonts.h"
#include "../app/R1100P-V5C_IN/View/inc/xlv_battery.h"
//#include "lv_port_indev.h"
//#include "language_control.h"

static lv_style_t style[5];

static rc_lcd_header_connection_t *rc_lcd_header_connection_create(lv_obj_t *parent)
{
     rc_lcd_header_connection_t *conn = (rc_lcd_header_connection_t *)malloc(sizeof(rc_lcd_header_connection_t));
    if (!conn)
    {
        return NULL;
    }

    static lv_style_t bg_style;
    lv_style_init(&bg_style);
    lv_style_set_bg_opa(&bg_style, LV_OPA_0);
    // lv_style_set_bg_color( &bg_style, lv_color_white() );

    // lv_style_set_border_color( &bg_style, lv_color_white() );
    // lv_style_set_border_side(&bg_style, LV_BORDER_SIDE_FULL);
    // lv_style_set_border_width( &bg_style, 2 );
    // lv_style_set_border_opa( &bg_style, LV_OPA_TRANSP );

    for (int i = 0; i < 5; ++i)
    {
        lv_style_init(&style[i]);
        lv_style_set_bg_color(&style[i], lv_color_black());
        lv_style_set_bg_opa(&style[i], LV_OPA_COVER);

    }

    conn->wireless = lv_obj_create(parent);
    // lv_img_set_src(conn->wireless, &public_02);
    lv_obj_set_pos(conn->wireless, 657 - 30, 8);
    lv_obj_set_size(conn->wireless, 55, 25);
    lv_obj_add_style(conn->wireless, &bg_style, 0);

    conn->r[0] = lv_obj_create(conn->wireless);
    lv_obj_set_size(conn->r[0], 4, 7);
    lv_obj_set_pos(conn->r[0], 10, 20);
    lv_obj_add_style(conn->r[0], &style[0], 0);

    conn->r[1] = lv_obj_create(conn->wireless);
    lv_obj_set_size(conn->r[1], 4, 11);
    lv_obj_set_pos(conn->r[1], 17, 20 - 4);
    lv_obj_add_style(conn->r[1], &style[1], 0);

    conn->r[2] = lv_obj_create(conn->wireless);
    lv_obj_set_size(conn->r[2], 4, 16);
    lv_obj_set_pos(conn->r[2], 24, 20 - 9);
    lv_obj_add_style(conn->r[2], &style[2], 0);

    conn->r[3] = lv_obj_create(conn->wireless);
    lv_obj_set_size(conn->r[3], 4, 20);
    lv_obj_set_pos(conn->r[3], 31, 20 - 13);
    lv_obj_add_style(conn->r[3], &style[3], 0);

    conn->r[4] = lv_obj_create(conn->wireless);
    lv_obj_set_size(conn->r[4], 4, 25);
    lv_obj_set_pos(conn->r[4], 38, 20 - 18);
    lv_obj_add_style(conn->r[4], &style[4], 0);

    conn->wirefull = lv_img_create(parent);
    lv_img_set_src(conn->wirefull, &wirefull);
    lv_obj_set_pos(conn->wirefull, 657, 0-2);
    lv_img_set_zoom( conn->wirefull, 200 );

    lv_obj_add_flag(conn->wireless, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(conn->wirefull, LV_OBJ_FLAG_HIDDEN);


    return conn;
}

static void _set_rf_channel(lv_obj_t *label, uint8_t v) //信道设置
{
    char temp[10];
        sprintf(temp, "%d", v+1);
    lv_label_set_text(label, temp);
}

static void _set_rssi_trans(lv_obj_t *label, uint8_t v)
{
    char temp[10];
		sprintf(temp, "T:%x", v);
		lv_label_set_text(label, temp);
}

static void _set_rssi_recev(lv_obj_t *label, uint8_t v)
{
    char temp[10];
		sprintf(temp, "R:%x", v);
    lv_label_set_text(label, temp);
}

static void _header_refresh(irc_lcd_header_t *h, void *data);

irc_lcd_header_t *working_header_create(lv_obj_t *parent)
{
    working_header_t *h = (working_header_t *)malloc(sizeof(working_header_t));
    if (!h)
    {
        return NULL;
    }
    irc_lcd_header_t *ih = (irc_lcd_header_t *)h;
    irc_lcd_header_init(&h->base, parent);
    h->base.refresh = _header_refresh;

    static lv_style_t whistle_style;
    lv_style_init(&whistle_style);
    lv_style_set_bg_opa(&whistle_style, LV_OPA_COVER);

    static lv_style_t title_style;
    lv_style_init(&title_style);
    lv_style_set_bg_opa(&title_style, LV_OPA_TRANSP);
    lv_style_set_text_color(&title_style, lv_color_black());
    lv_style_set_text_font(&title_style, &working_mode_28px);

    //创建连接符号
    h->connecter = rc_lcd_header_connection_create(h->base.obj);
    lv_obj_set_size(h->connecter->wireless, 55, 25);
    lv_obj_set_pos(h->connecter->wireless, 657, 8);

    //创建充电符号
    h->battery = xlv_battery_create(h->base.obj);
    lv_obj_set_size(h->battery, 60, 28);
    lv_obj_set_pos(h->battery, 720, 7);
    xlv_battery_set_little_style(h->battery);
    xlv_battery_set_charging(h->battery, false);

    //创建电笛
    h->whistle = lv_img_create(h->base.obj);
    lv_img_set_src(h->whistle, &horn_rc_header); //设置图片源
    lv_obj_set_pos(h->whistle, 585, 12);
    lv_img_set_zoom( h->whistle, 180 );
    lv_obj_add_flag(h->whistle, LV_OBJ_FLAG_HIDDEN);

	//创建信号通道显示
	h->channel = lv_label_create(h->base.obj);
	lv_obj_set_size(h->channel, 37, 25);
	lv_obj_set_pos(h->channel, 680, 8);
	lv_obj_add_style(h->channel, &title_style, 0);
	lv_label_set_text(h->channel, "");
	lv_obj_add_flag(h->channel, LV_OBJ_FLAG_HIDDEN);

	h->rssi_trans = lv_label_create(h->base.obj);
	lv_obj_set_size(h->rssi_trans, 100, 25);
	lv_obj_set_pos(h->rssi_trans, 470, 8);
	lv_obj_add_style(h->rssi_trans, &title_style, 0);
	lv_label_set_text(h->rssi_trans, "T");
	lv_obj_add_flag(h->rssi_trans, LV_OBJ_FLAG_HIDDEN);

	h->rssi_recev = lv_label_create(h->base.obj);
	lv_obj_set_size(h->rssi_recev, 100, 25);
	lv_obj_set_pos(h->rssi_recev, 280, 8);
	lv_obj_add_style(h->rssi_recev, &title_style, 0);
	lv_label_set_text(h->rssi_recev, "R");
	lv_obj_add_flag(h->rssi_recev, LV_OBJ_FLAG_HIDDEN);

    static lv_style_t style_ready;
    lv_style_init(&style_ready);
    lv_style_set_bg_color(&style_ready, lv_color_make(0x00, 0xFF, 0x00));
    lv_style_set_bg_opa(&style_ready, LV_OPA_COVER);
    lv_style_set_border_side( &style_ready, 1 );
    lv_style_set_border_color( &style_ready, lv_color_make(0x00, 0xFF, 0x00));
    lv_style_set_border_side( &style_ready, LV_BORDER_SIDE_FULL );
    lv_style_set_border_width( &style_ready, 1);
    lv_style_set_radius( &style_ready, 4) ;

    h->ready = lv_label_create( ih->obj );
    lv_obj_set_pos( h->ready, 180, 10 );
    lv_obj_set_size( h->ready, 78, 26 );
    lv_obj_add_style(h->ready, &style_ready, 0);
    lv_label_set_text( h->ready, "READY" );
    lv_obj_add_flag(h->ready, LV_OBJ_FLAG_HIDDEN);

    return ih;
}

static void _header_refresh(irc_lcd_header_t *ih, void *data)
{
    working_header_t *h = (working_header_t *)ih;
    rc_lcd_input_data_t *d = (rc_lcd_input_data_t *)data;
#if 1
    static char *_titles[] = {
        "label_00",
        "label_37",
        "label_20",
        "label_07",
        "label_38"};
#else
    static char *_titles[] = {
        "HOME",
        "ARMS",
        "RC",
        "FAULTS"};
#endif
    static rc_lcd_header_data_t last;

    if ( last.whistle != d->rc.horn)
    {
        last.whistle = d->rc.horn;
        if (d->rc.horn)
        { //显示电笛图标
            lv_obj_clear_flag(h->whistle, LV_OBJ_FLAG_HIDDEN);
        }
        else
        {
            lv_obj_add_flag(h->whistle, LV_OBJ_FLAG_HIDDEN);
        }
    }

    if ( last.wireless != d->header.wireless || last.wireless_level != d->header.wireless_level )
    {
        last.wireless = d->header.wireless;
        last.wireless_level = d->header.wireless_level;
            // d->wireless = true;
        if (d->header.wireless)
        { //设置信号
            // d->wireless_level = 2;
            if (d->header.wireless_level == 0)
            {
                lv_style_set_bg_color(&style[0], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[1], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[2], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[3], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[4], lv_color_make(177, 177, 177));
            }
            else if (d->header.wireless_level == 1)
            {
                lv_style_set_bg_color(&style[0], lv_color_black());
                lv_style_set_bg_color(&style[1], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[2], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[3], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[4], lv_color_make(177, 177, 177));
            }
            else if (d->header.wireless_level == 2)
            {
                lv_style_set_bg_color(&style[0], lv_color_black());
                lv_style_set_bg_color(&style[1], lv_color_black());
                lv_style_set_bg_color(&style[2], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[3], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[4], lv_color_make(177, 177, 177));
            }
            else if (d->header.wireless_level == 3)
            {
                lv_style_set_bg_color(&style[0], lv_color_black());
                lv_style_set_bg_color(&style[1], lv_color_black());
                lv_style_set_bg_color(&style[2], lv_color_black());
                lv_style_set_bg_color(&style[3], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[4], lv_color_make(177, 177, 177));
            }
            else if (d->header.wireless_level == 4)
            {
                lv_style_set_bg_color(&style[0], lv_color_black());
                lv_style_set_bg_color(&style[1], lv_color_black());
                lv_style_set_bg_color(&style[2], lv_color_black());
                lv_style_set_bg_color(&style[3], lv_color_black());
                lv_style_set_bg_color(&style[4], lv_color_make(177, 177, 177));
            }
            else if (d->header.wireless_level == 5)
            {
                lv_style_set_bg_color(&style[0], lv_color_black());
                lv_style_set_bg_color(&style[1], lv_color_black());
                lv_style_set_bg_color(&style[2], lv_color_black());
                lv_style_set_bg_color(&style[3], lv_color_black());
                lv_style_set_bg_color(&style[4], lv_color_black());
            }
            else
            {
                lv_style_set_bg_color(&style[0], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[1], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[2], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[3], lv_color_make(177, 177, 177));
                lv_style_set_bg_color(&style[4], lv_color_make(177, 177, 177));
            }
            lv_obj_clear_flag(h->connecter->wireless, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(h->connecter->wirefull, LV_OBJ_FLAG_HIDDEN);

            //刷新5个框
            #if 0
            for (int i = 0; i < 5; ++i)
            {
                lv_obj_invalidate(h->connecter->r[i]);
            }
            lv_obj_invalidate(h->connecter);
            #endif
        }
        else
        {
            lv_obj_add_flag(h->connecter->wireless, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(h->connecter->wirefull, LV_OBJ_FLAG_HIDDEN);
        }
    }

		lv_obj_set_pos(h->connecter->wireless, 657 - 30, 8);
		if (!d->rc.connected)
		{
			lv_label_set_text(h->channel, "0");
		}
		else
		{
			_set_rf_channel(h->channel, d->header.rf_channel);
		}

		if (!d->header.wireless)
		{
			lv_obj_add_flag(h->channel, LV_OBJ_FLAG_HIDDEN);
		}
		else
		{
			lv_obj_clear_flag(h->channel, LV_OBJ_FLAG_HIDDEN);
		}

//		暂时屏蔽if (rssi_show)
//		{
//			lv_obj_clear_flag(h->rssi_trans, LV_OBJ_FLAG_HIDDEN);
//			lv_obj_clear_flag(h->rssi_recev, LV_OBJ_FLAG_HIDDEN);
//			_set_rssi_trans(h->rssi_trans, d->rssi.trans[1]);
//			_set_rssi_recev(h->rssi_recev, d->rssi.recv[1]);
//		}
//		else
//		{
//			lv_obj_add_flag(h->rssi_trans, LV_OBJ_FLAG_HIDDEN);
//			lv_obj_add_flag(h->rssi_recev, LV_OBJ_FLAG_HIDDEN);
//		}

#if 1
    bool fault_page_show =
            ( d->machine.fault_total > 0 ) ;

    if ( fault_page_show && d->header.title_type == 4)
    {//显示错误页面
        d->header.title_type = 4;
        lv_obj_clear_flag(ih->title, LV_OBJ_FLAG_HIDDEN);
    }
    else if ( !fault_page_show && d->header.title_type == 4 )
    {//不显示错误页面
        d->header.title_type = 4;
        lv_obj_add_flag(ih->title, LV_OBJ_FLAG_HIDDEN);
    }
    else{
        lv_obj_clear_flag(ih->title, LV_OBJ_FLAG_HIDDEN);
    }
    lv_label_set_text_static(ih->title, _titles[d->header.title_type]);

#endif

    if (last.bat_level != d->header.bat_level)
    {
        last.bat_level = d->header.bat_level;
        xlv_battery_set_value(h->battery, d->header.bat_level);
    }

    if (last.bat_charging != d->header.bat_charging)
    {
        last.bat_charging = d->header.bat_charging;
        xlv_battery_set_charging(h->battery, d->header.bat_charging);
    }

}