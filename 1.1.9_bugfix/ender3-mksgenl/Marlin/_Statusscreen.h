/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_SCREENWIDTH 128
#define STATUS_SCREEN_HOTEND_TEXT_X(E) (38 + (E) * 20)
#define STATUS_SCREEN_BED_TEXT_X (HOTENDS > 1 ? 81 : 73)
#define STATUS_SCREEN_FAN_TEXT_X 103

//============================================

#if HOTENDS < 2

  const unsigned char status_screen0_bmp[] PROGMEM = {/*
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B01111000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00110000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101100,B00000000,B11010000,
    B11111000,B00000001,B10000000,B00000000,B00001100,B00011111,B11100000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00101110,B00110001,B11010000,
    B01001000,B00000000,B10000000,B00000000,B00010010,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00101111,B01111011,B11010000,
    B01000011,B11000011,B10001100,B11010000,B00000010,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00101111,B01111011,B11010000,
    B01110001,B00100100,B10010010,B01100111,B11001100,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00101110,B00110001,B11010000,
    B01000001,B00100100,B10011110,B01000000,B00000010,B00011111,B11100000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00101100,B00000000,B11010000,
    B01001001,B00100100,B10010000,B01000000,B00010010,B00011111,B11100000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00100000,B00110000,B00010000,
    B11111011,B10110011,B11001110,B11100000,B00001100,B00111111,B11110000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00100000,B01111000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000
    */
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
      0xF8,0x01,0x80,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
      0x48,0x00,0x80,0x00,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
      0x43,0xC3,0x8C,0xD0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
      0x71,0x24,0x92,0x6F,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
      0x41,0x24,0x9E,0x40,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
      0x49,0x24,0x90,0x40,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
      0xFB,0xB3,0xCE,0xE0,0x30,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
      0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
      0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
      0x00,0x7C,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
      0x00,0x22,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
      0x00,0x22,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
      0x00,0x22,0x6C,0x70,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
      0x00,0x3C,0x30,0x88,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
      0x00,0x20,0x20,0x88,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
      0x00,0x20,0x20,0x88,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
      0x00,0x20,0x20,0x88,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
      0x00,0x70,0x78,0x70,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {/*
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B00000011,B11010000,
    B11111000,B00000001,B10000000,B00000000,B00001100,B00011111,B11100000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00100000,B00110000,B00010000,
    B01001000,B00000000,B10000000,B00000000,B00010010,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00100000,B01111000,B00010000,
    B01000011,B11000011,B10001100,B11010000,B00000010,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00100000,B01111000,B00010000,
    B01110001,B00100100,B10010010,B01100111,B11001100,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00100000,B00110000,B00010000,
    B01000001,B00100100,B10011110,B01000000,B00000010,B00011111,B11100000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00101111,B00000011,B11010000,
    B01001001,B00100100,B10010000,B01000000,B00010010,B00011111,B11100000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00101111,B10000111,B11010000,
    B11111011,B10110011,B11001110,B11100000,B00001100,B00111111,B11110000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000
    */
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
      0xF8,0x01,0x80,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
      0x48,0x00,0x80,0x00,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
      0x43,0xC3,0x8C,0xD0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
      0x71,0x24,0x92,0x6F,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
      0x41,0x24,0x9E,0x40,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
      0x49,0x24,0x90,0x40,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
      0xFB,0xB3,0xCE,0xE0,0x30,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
      0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
      0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
      0x00,0x7C,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
      0x00,0x22,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
      0x00,0x22,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
      0x00,0x22,0x6C,0x70,0x00,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
      0x00,0x3C,0x30,0x88,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
      0x00,0x20,0x20,0x88,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
      0x00,0x20,0x20,0x88,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
      0x00,0x20,0x20,0x88,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
      0x00,0x70,0x78,0x70,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,

  };

#else // HOTENDS >= 2

  const unsigned char status_screen0_bmp[] PROGMEM = {
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B01111000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00110000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101100,B00000000,B11010000,
    B11111000,B00000001,B10000000,B00000000,B00001100,B00011111,B11100000,B00000001,B11111110,B00000000,B00001000,B00100000,B10000000,B00101110,B00110001,B11010000,
    B01001000,B00000000,B10000000,B00000000,B00010010,B00111110,B11110000,B00000011,B11001111,B00000000,B00000100,B00010000,B01000000,B00101111,B01111011,B11010000,
    B01000011,B11000011,B10001100,B11010000,B00000010,B00111100,B11110000,B00000011,B10110111,B00000000,B00000100,B00010000,B01000000,B00101111,B01111011,B11010000,
    B01110001,B00100100,B10010010,B01100111,B11001100,B00111010,B11110000,B00000011,B11110111,B00000000,B00001000,B00100000,B10000000,B00101110,B00110001,B11010000,
    B01000001,B00100100,B10011110,B01000000,B00000010,B00011110,B11100000,B00000001,B11101110,B00000000,B00010000,B01000001,B00000000,B00101100,B00000000,B11010000,
    B01001001,B00100100,B10010000,B01000000,B00010010,B00011110,B11100000,B00000001,B11011110,B00000000,B00100000,B10000010,B00000000,B00100000,B00110000,B00010000,
    B11111011,B10110011,B11001110,B11100000,B00001100,B00111110,B11110000,B00000011,B10111111,B00000000,B00100000,B10000010,B00000000,B00100000,B01111000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111110,B11110000,B00000011,B10000111,B00000000,B00010000,B01000001,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000011,B11111111,B00000000,B00001000,B00100000,B10000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B01111000,B00000000,B11111111,B11111111,B11000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00110000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B00000011,B11010000,
    B11111000,B00000001,B10000000,B00000000,B00001100,B00011111,B11100000,B00000001,B11111110,B00000000,B00001000,B00100000,B10000000,B00100000,B00110000,B00010000,
    B01001000,B00000000,B10000000,B00000000,B00010010,B00111110,B11110000,B00000011,B11001111,B00000000,B00000100,B00010000,B01000000,B00100000,B01111000,B00010000,
    B01000011,B11000011,B10001100,B11010000,B00000010,B00111100,B11110000,B00000011,B10110111,B00000000,B00000100,B00010000,B01000000,B00100000,B01111000,B00010000,
    B01110001,B00100100,B10010010,B01100111,B11001100,B00111010,B11110000,B00000011,B11110111,B00000000,B00001000,B00100000,B10000000,B00100000,B00110000,B00010000,
    B01000001,B00100100,B10011110,B01000000,B00000010,B00011110,B11100000,B00000001,B11101110,B00000000,B00010000,B01000001,B00000000,B00101111,B00000011,B11010000,
    B01001001,B00100100,B10010000,B01000000,B00010010,B00011110,B11100000,B00000001,B11011110,B00000000,B00100000,B10000010,B00000000,B00101111,B10000111,B11010000,
    B11111011,B10110011,B11001110,B11100000,B00001100,B00111110,B11110000,B00000011,B10111111,B00000000,B00100000,B10000010,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111110,B11110000,B00000011,B10000111,B00000000,B00010000,B01000001,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000011,B11111111,B00000000,B00001000,B00100000,B10000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B01111000,B00000000,B11111111,B11111111,B11000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00110000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000
  };

#endif // HOTENDS >= 2
