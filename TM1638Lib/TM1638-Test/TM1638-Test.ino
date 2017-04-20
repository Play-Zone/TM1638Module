/***********************************************************************
  Sample-Sketch for the 8 Characters / 16 Button TM1638 Breakout
  Connections:
  Arduino -> Breakout
  VCC        VCC
  GND        GND
  Pin 8      DIO
  Pin 9      CLK
  Pin 10     STB
  
  (Pins can be changed thru the constructor)
  
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

#include "TM1638Lib.h"

//TM1638 Pins
int DIO = 8;
int CLK = 9;
int STB = 10;

TM1638Lib tmlib(DIO, CLK, STB);

void setup()
{
}

void loop()
{
	// Write some numbers on the LCD
	tmlib.LedDisplay(1, 2, 3, 4, 5, 6, 7, 8);

	while (1)
	{
		// Fetch pressed key and display it
		unsigned int key_value = tmlib.ReadKey();
		switch (key_value) 
		{
		case 1:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 1);
			break;
		case 2:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 2);
			break;
		case 3:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 3);
			break;
		case 4:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 4);
			break;
		case 5:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 5);
			break;
		case 6:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 6);
			break;
		case 7:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 7);
			break;
		case 8:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 8);
			break;
		case 9:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 0, 9);
			break;
		case 10:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 11:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 1);
			break;
		case 12:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 2);
			break;
		case 13:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 3);
			break;
		case 14:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 4);
			break;
		case 15:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 5);
			break;
		case 16:
			tmlib.LedDisplay(0, 0, 0, 0, 0, 0, 1, 6);
			break;
		default:
			break;
		}
	}

}

