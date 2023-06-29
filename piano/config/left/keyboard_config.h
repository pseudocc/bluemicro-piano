// vim: noet ts=8 sw=8 sts=0
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H

#include "hardware_config.h"

#define TIME_TILL_HOLD 140
#define TIME_TILL_RELEASE 20 // was 80 

#define KEYBOARD_SIDE LEFT

#define DEVICE_NAME_R		"piano2R"
#define DEVICE_NAME_L		"piano2L"
#define DEVICE_NAME_M		"The Piano 2"
#define DEVICE_MODEL		"Piano2"
#define MANUFACTURER_NAME	"pseudocc"

#define PERIPHERAL_COUNT 1

#define KEYMAP(			\
	K00, K01, K02,		\
	K10, K11, K12, K13, 	\
	K20, K21		\
) { K00, K01, K02, K10, K11, K12, K13, K20, K21 }

#endif
