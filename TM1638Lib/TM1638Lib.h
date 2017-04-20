/***********************************************************************
  Simple Arduino-Library for the 8 Characters / 16 Button TM1638 Breakout
  
  Copyright (c) 2017 QiFei & PLAY-ZONE GmbH http://www.play-zone.ch
  Permission is hereby granted, free of charge, to any person obtaining a
  copy of this software and associate documentation files (the "Software"),
  to deal in the Software without restriction, including without limitation
  the rights to use, copy, modify, merge, publish, distribute, sublicense,
  and/or sell copies of the Software, and to permit persons to whom the
  Software is furnished to do so, subject to the following conditions:
  The above copyright notice and this permission notice shall be included
  in all copies or substantial portions of the Software.
*************************************************************************/

#include "Arduino.h"

#ifndef tm1638lib_h
#define tm1638lib_h

class TM1638Lib
{
public:
	TM1638Lib(int, int, int);
	void LedDisplay(unsigned char, unsigned  char, unsigned  char, unsigned  char, unsigned char, unsigned  char, unsigned  char, unsigned  char);
	unsigned char ReadKey();

private:
	void TM1638_Write(unsigned char);
	unsigned char TM1638_Read();
	void Write_COM(unsigned char);
	void Write_DATA(unsigned char, unsigned char);

	int DIO = 8;
	int CLK = 9;
	int STB = 10;

	unsigned char* tab;
	unsigned char num[8];
};

#endif