/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Lorenzo Miori (C) 2019 [ 3M4|L: memoryS60<at>gmail.com ]

    Version History
        * 1.0 initial

*/

#ifndef PT6311_H_
#define PT6311_H_

/* Standard includes */

#include <stdint.h>
#include <stddef.h>

#include "deasplay/deasplay_hal.h"

/* Enable library features */
/* It is a character display */
#define HAS_CHARACTER_INTERFACE

#define INDEX_POS           (0x1)
#define SEVEN_SEG_A_POS     (0x2)
#define SEVEN_SEG_B_POS     (0x4)
#define SEVEN_SEG_F_POS     (0x8)
#define SEVEN_SEG_G_POS     (0x10)
#define SEVEN_SEG_C_POS     (0x20)
#define SEVEN_SEG_E_POS     (0x40)
#define SEVEN_SEG_D_POS     (0x80)

#define KEY_PLAY_MASK  0x40
#define KEY_PLAY_BYTE  0x01
#define KEY_PLAY    KEY_PLAY_MASK, KEY_PLAY_BYTE

#define KEY_STOP_MASK  0x04
#define KEY_STOP_BYTE  0x01
#define KEY_STOP    KEY_STOP_MASK, KEY_STOP_BYTE

#define KEY_FREW_MASK  0x20
#define KEY_FREW_BYTE  0x01
#define KEY_FREW    KEY_FREW_MASK, KEY_FREW_BYTE

#define KEY_FFWD_MASK  0x02
#define KEY_FFWD_BYTE  0x00
#define KEY_FFWD    KEY_FFWD_MASK, KEY_FFWD_BYTE

#define KEY_EJCT_MASK  0x04
#define KEY_EJCT_BYTE  0x00
#define KEY_EJCT    KEY_EJCT_MASK, KEY_EJCT_BYTE

#define KEY_POWR_MASK  0x02
#define KEY_POWR_BYTE  0x01
#define KEY_POWR    KEY_POWR_MASK, KEY_POWR_BYTE

#define KEY_PRESSED(key_buf, key_mask, key_byte)  ((key_buf[key_byte] & key_mask) == key_mask)

// TODO remove
void pt6311_setup(void);

void display_number(uint32_t number);
void dbg_display_char(const char* str, uint8_t len);
void dbg_display_number_and_wait_btn(uint32_t number);
void pt6311_read(uint8_t command, uint8_t *data, uint8_t data_len);
void pt6311_write(uint8_t command, const uint8_t *data, uint8_t data_len);

void pt6311_display_hal_init(void);
void pt6311_display_hal_power(e_deasplay_HAL_power state);
void pt6311_display_hal_set_cursor(uint8_t line, uint8_t chr);
void pt6311_display_hal_write_char(uint8_t chr);
void pt6311_display_hal_cursor_visibility(bool visible);
void pt6311_set_extended(uint8_t id, uint8_t *data, uint8_t len);

/* bindings */
#define deasplay_hal_state_callback     pt6311_hal_state_callback
#define deasplay_hal_init               pt6311_display_hal_init
#define deasplay_hal_power              pt6311_display_hal_power
#define deasplay_hal_set_cursor         pt6311_display_hal_set_cursor
#define deasplay_hal_write_char         pt6311_display_hal_write_char
#define deasplay_hal_cursor_visibility  pt6311_display_hal_cursor_visibility
#define deasplay_hal_write_extended     pt6311_write_extended
#define deasplay_hal_set_extended       pt6311_set_extended

/* LOW-LEVEL routines */
void pt6311_setup_io(void);
void pt6311_shift_out(uint8_t data);
void pt6311_shift_in(uint8_t *data);
void pt6311_write(uint8_t command, const uint8_t *data, uint8_t data_len);
void pt6311_read(uint8_t command, uint8_t *data, uint8_t data_len);

#endif /* PT6311_H_ */
