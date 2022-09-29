/*
 * SevenSegment.c
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */
#include "SevenSegment.h"

void SevenSegment_INIT(void)
{
	GPIO_setupPinDirection(PORTA_ID, 0, OUTPUT);
	GPIO_writePin(PORTA_ID, 0, LOGIC_HIGH);
	GPIO_setupPinDirection(PORTC_ID, 0, OUTPUT);
	GPIO_setupPinDirection(PORTC_ID, 1, OUTPUT);
	GPIO_setupPinDirection(PORTC_ID, 2, OUTPUT);
	GPIO_setupPinDirection(PORTC_ID, 3, OUTPUT);
}

void SevenSegment_writeNum(unsigned char num)
{
	PORTC = (PORTC & 0xF0) | (num & 0x0F);
}
