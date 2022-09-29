/*
 * Led.c
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */
#include "Led.h"
signed char time = 9 ;

void Led_Init(void)
{
	GPIO_setupPinDirection(PORTD_ID, 0, OUTPUT);
	GPIO_setupPinDirection(PORTD_ID, 1, OUTPUT);
	GPIO_setupPinDirection(PORTD_ID, 2, OUTPUT);

	GPIO_writePin(PORTD_ID, 0, LOGIC_LOW);
	GPIO_writePin(PORTD_ID, 1, LOGIC_LOW);
	GPIO_writePin(PORTD_ID, 2, LOGIC_LOW);
}
void Led_Green(void)
{
	time = 9;
	GPIO_writePin(PORTD_ID, 0, LOGIC_HIGH);
	GPIO_writePin(PORTD_ID, 1, LOGIC_LOW);
	GPIO_writePin(PORTD_ID, 2, LOGIC_LOW);
}

void Led_Yellow(void)
{
	time = 4;
	GPIO_writePin(PORTD_ID, 0, LOGIC_LOW);
	GPIO_writePin(PORTD_ID, 1, LOGIC_HIGH);
	GPIO_writePin(PORTD_ID, 2, LOGIC_LOW);
}

void Led_Red(void)
{
	time = 7;
	GPIO_writePin(PORTD_ID, 0, LOGIC_LOW);
	GPIO_writePin(PORTD_ID, 1, LOGIC_LOW);
	GPIO_writePin(PORTD_ID, 2, LOGIC_HIGH);
}
