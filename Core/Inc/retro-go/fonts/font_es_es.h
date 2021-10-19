#pragma once
// Constant: font8x12

const char font8x12_basic[256][12]  __attribute__((section(".extflash_font"))) = {
  {0x7e,0xc3,0x99,0x99,0xf3,0xe7,0xe7,0xff,0xe7,0xe7,0x7e,0x00},//00
  {0x00,0x00,0x00,0x76,0xdc,0x00,0x76,0xdc,0x00,0x00,0x00,0x00},//01
  {0x6e,0xd8,0xd8,0xd8,0xd8,0xde,0xd8,0xd8,0xd8,0x6e,0x00,0x00},//02
  {0x00,0x00,0x00,0x6e,0xdb,0xdb,0xdf,0xd8,0xdb,0x6e,0x00,0x00},//03
  {0x00,0x00,0x10,0x38,0x7c,0xfe,0x7c,0x38,0x10,0x00,0x00,0x00},//04
  {0x88,0x88,0xf8,0x88,0x88,0x00,0x3e,0x08,0x08,0x08,0x08,0x00},//05
  {0xf8,0x80,0xe0,0x80,0x80,0x00,0x3e,0x20,0x38,0x20,0x20,0x00},//06
  {0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00},// 0x07 //full
  {0x00,0xFE,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00},// 0x08 //fill 
  {0x22,0x88,0x22,0x88,0x22,0x88,0x22,0x88,0x22,0x88,0x22,0x88},
  {0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa},
  {0xee,0xbb,0xee,0xbb,0xee,0xbb,0xee,0xbb,0xee,0xbb,0xee,0xbb},
  {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff},
  {0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff},
  {0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00},
  {0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0},
  {0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f},
  {0x88,0xc8,0xa8,0x98,0x88,0x00,0x20,0x20,0x20,0x20,0x3e,0x00},
  {0x88,0x88,0x50,0x50,0x20,0x00,0x3e,0x08,0x08,0x08,0x08,0x00},
  {0x00,0x00,0x06,0x0c,0x18,0x30,0x7e,0x00,0x7e,0x00,0x00,0x00},
  {0x00,0x00,0x60,0x30,0x18,0x0c,0x7e,0x00,0x7e,0x00,0x00,0x00},
  {0x00,0x00,0x06,0x0c,0xfe,0x38,0xfe,0x60,0xc0,0x00,0x00,0x00},
  {0x00,0x02,0x0e,0x3e,0x7e,0xfe,0x7e,0x3e,0x0e,0x02,0x00,0x00},
  {0x00,0x80,0xe0,0xf0,0xfc,0xfe,0xfc,0xf0,0xe0,0x80,0x00,0x00},
  {0x00,0x18,0x3c,0x7e,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00},
  {0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x7e,0x3c,0x18,0x00,0x00},
  {0x00,0x00,0x00,0x18,0x0c,0xfe,0x0c,0x18,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x30,0x60,0xfe,0x60,0x30,0x00,0x00,0x00,0x00},
  {0x00,0x18,0x3c,0x7e,0x18,0x18,0x18,0x7e,0x3c,0x18,0x00,0x00},
  {0x00,0x00,0x00,0x28,0x6c,0xfe,0x6c,0x28,0x00,0x00,0x00,0x00},
  {0x00,0x06,0x06,0x36,0x66,0xfe,0x60,0x30,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0xc0,0x7c,0x6e,0x6c,0x6c,0x6c,0x00,0x00,0x00},
//0x20
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x18,0x3c,0x3c,0x3c,0x18,0x18,0x00,0x18,0x18,0x00,0x00},
  {0x00,0x36,0x36,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x6c,0xfe,0x6c,0x6c,0xfe,0x6c,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x10,0x7c,0xd6,0x70,0x38,0x1c,0xd6,0x7c,0x10,0x00,0x00},
  {0x00,0x00,0x00,0x62,0x66,0x0c,0x18,0x30,0x66,0xc6,0x00,0x00},
  {0x00,0x38,0x6c,0x38,0x38,0x76,0xf6,0xce,0xcc,0x76,0x00,0x00},
  {0x1c,0x1c,0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x0c,0x18,0x30,0x30,0x30,0x30,0x30,0x18,0x0c,0x00,0x00},
  {0x00,0x30,0x18,0x0c,0x0c,0x0c,0x0c,0x0c,0x18,0x30,0x00,0x00},
  {0x00,0x00,0x00,0x6c,0x38,0xfe,0x38,0x6c,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x18,0x18,0x7e,0x18,0x18,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x0c,0x18,0x00},
  {0x00,0x00,0x00,0x00,0x00,0xfe,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00},
  {0x00,0x00,0x00,0x06,0x0c,0x18,0x30,0x60,0xc0,0x00,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc6,0xd6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x18,0x78,0x18,0x18,0x18,0x18,0x18,0x18,0x7e,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0x0c,0x18,0x30,0x60,0xc6,0xfe,0x00,0x00},
  {0x00,0x7c,0xc6,0x06,0x06,0x3c,0x06,0x06,0xc6,0x7c,0x00,0x00},
  {0x00,0x0c,0x1c,0x3c,0x6c,0xcc,0xfe,0x0c,0x0c,0x0c,0x00,0x00},
  {0x00,0xfe,0xc0,0xc0,0xc0,0xfc,0x06,0x06,0xc6,0x7c,0x00,0x00},
  {0x00,0x7c,0xc6,0xc0,0xc0,0xfc,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0xfe,0xc6,0x0c,0x18,0x30,0x30,0x30,0x30,0x30,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc6,0x7c,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc6,0x7e,0x06,0x06,0xc6,0x7c,0x00,0x00},
  {0x00,0x00,0x00,0x0c,0x0c,0x00,0x00,0x0c,0x0c,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x0c,0x0c,0x00,0x00,0x0c,0x0c,0x0c,0x18,0x00},
  {0x00,0x0c,0x18,0x30,0x60,0xc0,0x60,0x30,0x18,0x0c,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xfe,0x00,0xfe,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x60,0x30,0x18,0x0c,0x06,0x0c,0x18,0x30,0x60,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0x0c,0x18,0x18,0x00,0x18,0x18,0x00,0x00},
//0x40
  {0x00,0x7c,0xc6,0xc6,0xde,0xde,0xde,0xdc,0xc0,0x7e,0x00,0x00},
  {0x00,0x38,0x6c,0xc6,0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0x00,0x00},
  {0x00,0xfc,0x66,0x66,0x66,0x7c,0x66,0x66,0x66,0xfc,0x00,0x00},
  {0x00,0x3c,0x66,0xc0,0xc0,0xc0,0xc0,0xc0,0x66,0x3c,0x00,0x00},
  {0x00,0xf8,0x6c,0x66,0x66,0x66,0x66,0x66,0x6c,0xf8,0x00,0x00},
  {0x00,0xfe,0x66,0x60,0x60,0x7c,0x60,0x60,0x66,0xfe,0x00,0x00},
  {0x00,0xfe,0x66,0x60,0x60,0x7c,0x60,0x60,0x60,0xf0,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc0,0xc0,0xce,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0xc6,0xc6,0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0xc6,0x00,0x00},
  {0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0xd8,0xd8,0x70,0x00,0x00},
  {0x00,0xc6,0xcc,0xd8,0xf0,0xf0,0xd8,0xcc,0xc6,0xc6,0x00,0x00},
  {0x00,0xf0,0x60,0x60,0x60,0x60,0x60,0x62,0x66,0xfe,0x00,0x00},
  {0x00,0xc6,0xc6,0xee,0xfe,0xd6,0xd6,0xd6,0xc6,0xc6,0x00,0x00},
  {0x00,0xc6,0xc6,0xe6,0xe6,0xf6,0xde,0xce,0xce,0xc6,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0xfc,0x66,0x66,0x66,0x7c,0x60,0x60,0x60,0xf0,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xd6,0x7c,0x06,0x00},
  {0x00,0xfc,0x66,0x66,0x66,0x7c,0x78,0x6c,0x66,0xe6,0x00,0x00},
  {0x00,0x7c,0xc6,0xc0,0x60,0x38,0x0c,0x06,0xc6,0x7c,0x00,0x00},
  {0x00,0x7e,0x5a,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x10,0x00,0x00},
  {0x00,0xc6,0xc6,0xd6,0xd6,0xd6,0xfe,0xee,0xc6,0xc6,0x00,0x00},
  {0x00,0xc6,0xc6,0x6c,0x38,0x38,0x38,0x6c,0xc6,0xc6,0x00,0x00},
  {0x00,0x66,0x66,0x66,0x66,0x3c,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0xfe,0xc6,0x8c,0x18,0x30,0x60,0xc2,0xc6,0xfe,0x00,0x00},
  {0x00,0x7c,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7c,0x00,0x00},
  {0x00,0x00,0x00,0xc0,0x60,0x30,0x18,0x0c,0x06,0x00,0x00,0x00},
  {0x00,0x7c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x7c,0x00,0x00},
  {0x00,0x18,0x3c,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff},
//0x60
  {0x1c,0x1c,0x18,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x00,0xe0,0x60,0x60,0x7c,0x66,0x66,0x66,0x66,0xfc,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x7c,0xc6,0xc0,0xc0,0xc6,0x7c,0x00,0x00},
  {0x00,0x1c,0x0c,0x0c,0x7c,0xcc,0xcc,0xcc,0xcc,0x7e,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x00,0x00},
  {0x00,0x1c,0x36,0x30,0x30,0xfc,0x30,0x30,0x30,0x78,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x76,0xce,0xc6,0xc6,0x7e,0x06,0xc6,0x7c},
  {0x00,0xe0,0x60,0x60,0x6c,0x76,0x66,0x66,0x66,0xe6,0x00,0x00},
  {0x00,0x18,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0x00,0x0c,0x0c,0x00,0x1c,0x0c,0x0c,0x0c,0xcc,0xcc,0x78},
  {0x00,0xe0,0x60,0x60,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x00,0x00},
  {0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x6c,0xfe,0xd6,0xd6,0xc6,0xc6,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xdc,0x66,0x66,0x66,0x66,0x66,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xdc,0x66,0x66,0x66,0x7c,0x60,0x60,0xf0},
  {0x00,0x00,0x00,0x00,0x76,0xcc,0xcc,0xcc,0x7c,0x0c,0x0c,0x1e},
  {0x00,0x00,0x00,0x00,0xdc,0x66,0x60,0x60,0x60,0xf0,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x7c,0xc6,0x70,0x1c,0xc6,0x7c,0x00,0x00},
  {0x00,0x30,0x30,0x30,0xfc,0x30,0x30,0x30,0x36,0x1c,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0x6c,0x38,0x10,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xc6,0xc6,0xd6,0xd6,0xfe,0x6c,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xc6,0x6c,0x38,0x38,0x6c,0xc6,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0xce,0x76,0x06,0xc6,0x7c},
  {0x00,0x00,0x00,0x00,0xfe,0x8c,0x18,0x30,0x62,0xfe,0x00,0x00},
  {0x00,0x0e,0x18,0x18,0x18,0x70,0x18,0x18,0x18,0x0e,0x00,0x00},
  {0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00},
  {0x00,0x70,0x18,0x18,0x18,0x0e,0x18,0x18,0x18,0x70,0x00,0x00},
  {0x00,0x76,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x66,0x66,0x00,0x66,0x66,0x66,0x3c,0x18,0x18,0x3c,0x00,0x00},
//0x80
  {0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x18,0x18,0x18,0x18,0x18,0x1f,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x00,0x00,0x00,0x00,0x00,0x1f,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x18,0x18,0x18,0x18,0x18,0x1f,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x00,0x00,0x00,0x00,0x00,0xf8,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x18,0x18,0x18,0x18,0x18,0xf8,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x18,0x18,0x18,0x18,0x18,0xff,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0xf8,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x18,0x18,0x18,0x18,0x18,0xf8,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x00,0x00,0x00,0x00,0x00,0xff,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x18,0x18,0x18,0x18,0x18,0xff,0x18,0x18,0x18,0x18,0x18,0x18},
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00},
  {0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x7c,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x3f,0x30,0x3f,0x00,0x00,0x00,0x00,0x00},
  {0x6c,0x6c,0x6c,0x6c,0x6f,0x60,0x7f,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x7c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x00,0x00,0x00,0x00,0x7f,0x60,0x6f,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x6c,0x6c,0x6c,0x6c,0x6f,0x60,0x6f,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x00,0x00,0x00,0x00,0xfc,0x0c,0xfc,0x00,0x00,0x00,0x00,0x00},
  {0x6c,0x6c,0x6c,0x6c,0xec,0x0c,0xfc,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00},
  {0x6c,0x6c,0x6c,0x6c,0xef,0x00,0xff,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xfc,0x0c,0xec,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x6c,0x6c,0x6c,0x6c,0xec,0x0c,0xec,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x00,0x00,0x00,0x00,0xff,0x00,0xef,0x6c,0x6c,0x6c,0x6c,0x6c},
  {0x6c,0x6c,0x6c,0x6c,0xef,0x00,0xef,0x6c,0x6c,0x6c,0x6c,0x6c},
//0xa0
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0xfe,0x00},
  {0x00,0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x3c,0x3c,0x3c,0x18},
  {0x00,0x00,0x10,0x7c,0xd6,0xd0,0xd0,0xd6,0x7c,0x10,0x00,0x00},
  {0x00,0x38,0x6c,0x60,0x60,0xf0,0x60,0x66,0xf6,0x6c,0x00,0x00},
  {0x00,0x00,0x00,0xc6,0x7c,0x6c,0x6c,0x7c,0xc6,0x00,0x00,0x00},
  {0x00,0x66,0x66,0x3c,0x18,0x7e,0x18,0x3c,0x18,0x18,0x00,0x00},
  {0x00,0x18,0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x18,0x00,0x00},
  {0x7c,0xc6,0xc6,0x60,0x7c,0xc6,0xc6,0x7c,0x0c,0xc6,0xc6,0x7c},
  {0x00,0x6c,0x6c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x7e,0x81,0x99,0xa5,0xa1,0xa1,0xa5,0x99,0x81,0x7e,0x00,0x00},
  {0x3c,0x6c,0x6c,0x3e,0x00,0x7e,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x36,0x6c,0xd8,0x6c,0x36,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x7e,0x06,0x06,0x06,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x7e,0x81,0xb9,0xa5,0xa5,0xb9,0xa5,0xa5,0x81,0x7e,0x00,0x00},
  {0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x38,0x6c,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x18,0x18,0x7e,0x18,0x18,0x00,0x7e,0x00,0x00},
  {0x00,0x38,0x6c,0x18,0x30,0x7c,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x38,0x6c,0x18,0x6c,0x38,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x0c,0x18,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0xf6,0xc0,0xc0},
  {0x00,0x7f,0xdb,0xdb,0xdb,0x7b,0x1b,0x1b,0x1b,0x1b,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x6c,0x38},
  {0x00,0x30,0x70,0x30,0x30,0x78,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x38,0x6c,0x6c,0x38,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00},
  {0x00,0x00,0x00,0xd8,0x6c,0x36,0x6c,0xd8,0x00,0x00,0x00,0x00},
  {0x60,0x62,0x66,0x6c,0x18,0x36,0x6e,0xde,0x36,0x7e,0x06,0x06},
  {0x60,0x62,0x66,0x6c,0x18,0x30,0x60,0xdc,0x36,0x0c,0x18,0x3e},
  {0xe0,0x32,0x66,0x3c,0xf8,0x36,0x6e,0xde,0x36,0x7e,0x06,0x06},
  {0x00,0x00,0x00,0x30,0x30,0x00,0x30,0x30,0x60,0xc6,0xc6,0x7c},
//0xc0
  {0x30,0x18,0x00,0x38,0x6c,0xc6,0xc6,0xfe,0xc6,0xc6,0x00,0x00},
  {0x18,0x30,0x00,0x38,0x6c,0xc6,0xc6,0xfe,0xc6,0xc6,0x00,0x00},
  {0x38,0x6c,0x38,0x00,0x7c,0xc6,0xc6,0xfe,0xc6,0xc6,0x00,0x00},
  {0x76,0xdc,0x00,0x38,0x6c,0xc6,0xc6,0xfe,0xc6,0xc6,0x00,0x00},
  {0x6c,0x6c,0x00,0x38,0x6c,0xc6,0xc6,0xfe,0xc6,0xc6,0x00,0x00},
  {0x38,0x6c,0x38,0x00,0x7c,0xc6,0xc6,0xfe,0xc6,0xc6,0x00,0x00},
  {0x7e,0xd8,0xd8,0xd8,0xd8,0xfe,0xd8,0xd8,0xd8,0xde,0x00,0x00},
  {0x00,0x3c,0x66,0xc0,0xc0,0xc0,0xc6,0x66,0x3c,0x18,0xcc,0x38},
  {0x18,0x0c,0x00,0xfe,0x66,0x60,0x7c,0x60,0x66,0xfe,0x00,0x00},
  {0x18,0x30,0x00,0xfe,0x66,0x60,0x7c,0x60,0x66,0xfe,0x00,0x00},
  {0x38,0x6c,0x00,0xfe,0x66,0x60,0x7c,0x60,0x66,0xfe,0x00,0x00},
  {0x6c,0x6c,0x00,0xfe,0x66,0x60,0x7c,0x60,0x66,0xfe,0x00,0x00},
  {0x18,0x0c,0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x18,0x30,0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x3c,0x66,0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x66,0x66,0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0xf8,0x6c,0x66,0x66,0xf6,0x66,0x66,0x6c,0xf8,0x00,0x00},
  {0x76,0xdc,0x00,0xc6,0xe6,0xf6,0xde,0xce,0xc6,0xc6,0x00,0x00},
  {0x30,0x18,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x18,0x30,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x38,0x6c,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x76,0xdc,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x6c,0x6c,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x6c,0x38,0x38,0x6c,0x00,0x00,0x00,0x00},
  {0x00,0x7e,0xc6,0xce,0xde,0xd6,0xf6,0xe6,0xc6,0xfc,0x00,0x00},
  {0x30,0x18,0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x18,0x30,0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x38,0x6c,0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x6c,0x6c,0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x0c,0x18,0x00,0x66,0x66,0x66,0x3c,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0xf0,0x60,0x7c,0x66,0x66,0x66,0x7c,0x60,0xf0,0x00,0x00},
  {0x00,0x7c,0xc6,0xc6,0xc6,0xcc,0xc6,0xc6,0xd6,0xdc,0x80,0x00},
//0xe0
  {0x60,0x30,0x18,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x18,0x30,0x60,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x30,0x78,0xcc,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x00,0x76,0xdc,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x00,0x6c,0x6c,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x38,0x6c,0x38,0x00,0x78,0x0c,0x7c,0xcc,0xdc,0x76,0x00,0x00},
  {0x00,0x00,0x00,0x7e,0xdb,0x1b,0x7f,0xd8,0xdb,0x7e,0x00,0x00},
  {0x00,0x00,0x00,0x7c,0xc6,0xc0,0xc0,0xc6,0x7c,0x18,0x6c,0x38},
  {0x30,0x18,0x0c,0x00,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x00,0x00},
  {0x0c,0x18,0x30,0x00,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x00,0x00},
  {0x10,0x38,0x6c,0x00,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x00,0x00},
  {0x00,0x6c,0x6c,0x00,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x00,0x00},
  {0x60,0x30,0x18,0x00,0x38,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x0c,0x18,0x30,0x00,0x38,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x18,0x3c,0x66,0x00,0x38,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x00,0x6c,0x6c,0x00,0x38,0x18,0x18,0x18,0x18,0x3c,0x00,0x00},
  {0x78,0x30,0x78,0x0c,0x7e,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x76,0xdc,0x00,0xdc,0x66,0x66,0x66,0x66,0x66,0x00,0x00},
  {0x60,0x30,0x18,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x0c,0x18,0x30,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x10,0x38,0x6c,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x76,0xdc,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x6c,0x6c,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00},
  {0x00,0x00,0x18,0x18,0x00,0x7e,0x00,0x18,0x18,0x00,0x00,0x00},
  {0x00,0x00,0x00,0x00,0x7e,0xce,0xde,0xf6,0xe6,0xfc,0x00,0x00},
  {0xc0,0x60,0x30,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x00,0x00},
  {0x0c,0x18,0x30,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x00,0x00},
  {0x30,0x78,0xcc,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x00,0x00},
  {0x00,0xcc,0xcc,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x00,0x00},
  {0x0c,0x18,0x30,0x00,0xc6,0xc6,0xc6,0xce,0x76,0x06,0xc6,0x7c},
  {0x00,0xf0,0x60,0x60,0x78,0x6c,0x6c,0x6c,0x78,0x60,0x60,0xf0},
  {0x00,0xc6,0xc6,0x00,0xc6,0xc6,0xc6,0xce,0x76,0x06,0xc6,0x7c}
};

