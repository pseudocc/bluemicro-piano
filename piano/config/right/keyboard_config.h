// vim: noet ts=8 sw=8 sts=0
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H

#include "hardware_config.h"

#define TIME_TILL_HOLD 140
#define TIME_TILL_RELEASE 20 // was 80 

#define KEYBOARD_SIDE RIGHT

#define DEVICE_NAME_R		"piano2R"
#define DEVICE_NAME_L		"piano2L"
#define DEVICE_NAME_M		"The Piano 2"
#define DEVICE_MODEL		"Piano2"
#define MANUFACTURER_NAME	"pseudocc"

#define KEYMAP(			\
	K00, K01, K02,		\
	K10, K11, K12, K13, 	\
	K20, K21		\
) { K02, K01, K00, K13, K12, K11, K10, K21, K20 }

#endif
