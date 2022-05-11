#ifndef _BITMAP_H
#define _BITMAP_H
#endif

#ifdef ARDUINO_ARCH_AVR
#include <avr/pgmspace.h>
#else
#include <pgmspace.h>
#endif

const unsigned char error[] PROGMEM = {
0x00, 0x00, 0x00, 0x3c, 0x03, 0xc0, 0x7e, 0x07, 0xe0, 0x7f, 0x0f, 0xe0, 0x7f, 0x9f, 0xe0, 0x7f, 
0xff, 0xe0, 0x3f, 0xff, 0xc0, 0x1f, 0xff, 0x80, 0x0f, 0xff, 0x00, 0x07, 0xfe, 0x00, 0x07, 0xfe, 
0x00, 0x0f, 0xff, 0x00, 0x1f, 0xff, 0x80, 0x3f, 0xff, 0xc0, 0x7f, 0xff, 0xe0, 0x7f, 0x9f, 0xe0, 
0x7f, 0x0f, 0xe0, 0x7e, 0x07, 0xe0, 0x3c, 0x03, 0xc0, 0x00, 0x00, 0x00
};

const unsigned char warning[] PROGMEM = {
0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x01, 0xf8, 0x00, 0x01, 
0x98, 0x00, 0x03, 0x1c, 0x00, 0x03, 0x9c, 0x00, 0x07, 0x9e, 0x00, 0x07, 0x9e, 0x00, 0x0f, 0x9f, 
0x00, 0x0f, 0x9f, 0x00, 0x1f, 0x9f, 0x80, 0x1f, 0x9f, 0x80, 0x3f, 0xff, 0xc0, 0x3f, 0xff, 0xc0, 
0x7f, 0x9f, 0xe0, 0x7f, 0x9f, 0xe0, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xe0
};

const unsigned char okay[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0xe0, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xf0, 0x00, 
0x07, 0xf0, 0x00, 0x0f, 0xe0, 0x70, 0x0f, 0xc0, 0x78, 0x1f, 0xc0, 0xf8, 0x3f, 0x80, 0xfc, 0x7f, 
0x00, 0x7e, 0x7e, 0x00, 0x7f, 0xfc, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xf8, 0x00, 0x0f, 0xf0, 0x00, 
0x0f, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x01, 0x80, 0x00
};
