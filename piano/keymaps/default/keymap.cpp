#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix = {KEYMAP(
	KC_1, KC_2, KC_3,
	KC_Q, KC_W, KC_E, KC_R,
	KC_LSFT, KC_SPC
)};

void setupKeymap() {
	// single layer
}
