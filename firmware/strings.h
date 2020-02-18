/*
 *                  Copyright 2014 ARTaylor.co.uk
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Author: Richard Taylor (richard@artaylor.co.uk)
 */

#ifndef _STRINGS_H
#define _STRINGS_H

#define NUM_STICKS		4
#define NUM_POTS		2
#define NUM_SWITCHES	4

#define SYS_MENU_LIST1_LEN	22
#define MOD_MENU_LIST1_LEN	13
#define MIXER_EDIT_LIST1_LEN 13
#define HELI_MENU_LIST_LEN 6
#define MIX_SRCS_MAX 29
#define MIX_WARN_MAX 4
#define MIX_CURVE_MAX 15
#define EXPODR_MAX 7

typedef enum {
	GUI_MSG_NONE = 0,
	GUI_MSG_CAL_OK_START,
	GUI_MSG_CAL_MOVE_EXTENTS,
	GUI_MSG_CAL_CENTRE,
	GUI_MSG_OK,
	GUI_MSG_CANCELLED,
	GUI_MSG_OK_CANCEL,
	GUI_MSG_ZERO_THROTTLE,
	GUI_MSG_SWITCH_WARNING,
	GUI_MSG_SET_SWITCH_TO_POS,
	GUI_MSG_EEPROM_INVALID,
	GUI_MSG_OK_TO_PRESET_MODEL,
	GUI_MSG_OK_TO_PRESET_ALL,
	GUI_MSG_ROW_MENU,
	GUI_MSG_FW_UPGRADE,

	// Headings (System Menu)
	GUI_HDG_RADIO_SETUP,
	GUI_HDG_TRAINER,
	GUI_HDG_VERSION,
	GUI_HDG_DIAG,
	GUI_HDG_ANALOG,
	GUI_HDG_CALIBRATION,

	// Headings (Model Menu)
	GUI_HDG_MODELSEL,
	GUI_HDG_SETUP,
	GUI_HDG_HELI_SETUP,
	GUI_HDG_EXPODR,
	GUI_HDG_MIXER,
	GUI_HDG_LIMITS,
	GUI_HDG_CURVES,
	GUI_HDG_CUST_SW,
	GUI_HDG_SAFE_SW,
	GUI_HDG_TEMPLATES,
	GUI_HDG_EDIT_MIX,
	GUI_HDG_CURVE_EDIT,

	GUI_MSG_MAX,
} GUI_MSG;

enum _menu_page {
	SYS_PAGE_SETUP = 0,
	SYS_PAGE_TRAINER,
	SYS_PAGE_VERSION,
	SYS_PAGE_DIAG,
	SYS_PAGE_ANA,
	SYS_PAGE_CAL,
};

enum _model_page {
	MOD_PAGE_SELECT = 0,
	MOD_PAGE_SETUP,
	MOD_PAGE_HELI_SETUP,
	MOD_PAGE_EXPODR,
	MOD_PAGE_MIXER,
	MOD_PAGE_LIMITS,
	MOD_PAGE_CURVES,
	MOD_PAGE_CUST_SW,
	MOD_PAGE_SAFE_SW,
	MOD_PAGE_TEMPLATES,
	MOD_PAGE_MIX_EDIT,
	MOD_PAGE_CURVE_EDIT,
};

enum _mix_mode {
	MIX_MODE_ADD = 0, 
	MIX_MODE_MULTIPLY, 
	MIX_MODE_REPLACE, 
	MIX_MODE_MAX
};

enum _sources {
	SRC_HALF = 0, 
	SRC_FULL, 
	SRC_CYC, 
	SRC_PPM, 
	SRC_MIX, 
	SRC_TRN, 
	SRC_MAX
};

enum _chan_order {
	CHAN_ORDER_ATER = 0,
	CHAN_ORDER_AETR,
	CHAN_ORDER_RTEA,
	CHAN_ORDER_RETA,
	CHAN_ORDER_MAX,
};

enum _menu_beeper {
	BEEPER_SILENT = 0, 
	BEEPER_NOKEY, 
	BEEPER_NORMAL, 
	BEEPER_MAX
};

enum _swash_type {
	SWASH_NONE =0,
	SWASH_TYPE_120, 
	SWASH_TYPE_120X,
	SWASH_TYPE_140,
	SWASH_TYPE_90,
	SWASH_TYPE_MAX   
};

extern const char * const switches[NUM_SWITCHES + 1];
extern const char * const switches_mask[1<<NUM_SWITCHES];
extern const char * const sticks[NUM_STICKS];
extern const char * const pots[NUM_POTS];
extern const char * const sources[SRC_MAX];
extern const char * const mix_mode_hdr;
extern const char * const mix_mode[MIX_MODE_MAX];
extern const char * const mix_src[MIX_SRCS_MAX];
extern const char * const mix_warn[MIX_WARN_MAX];
extern const char * const mix_curve[MIX_CURVE_MAX];
extern const char * const expodr[EXPODR_MAX];
extern const char * const drlevel[3];
extern const char * const menu_on_off[4];
extern const char * const channel_order[CHAN_ORDER_MAX];
extern const char * const system_menu_beeper[BEEPER_MAX];
extern const char * const msg[GUI_MSG_MAX];
extern const char * const system_menu_list1[SYS_MENU_LIST1_LEN];
extern const char * const model_menu_list1[MOD_MENU_LIST1_LEN];
extern const char * const mixer_edit_list1[MIXER_EDIT_LIST1_LEN];
extern const char * const timer_modes[];
extern const char * const dir_labels[];
extern const char * const inverse_labels[];
extern const char * const safety_switch_mode_labels[];
extern const char * const swash_type_labels[SWASH_TYPE_MAX];
extern const char * const heli_menu_list[HELI_MENU_LIST_LEN];
#endif // _STRINGS_H
