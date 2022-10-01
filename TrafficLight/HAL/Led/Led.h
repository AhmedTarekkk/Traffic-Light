/*
 * Led.h
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */

#ifndef LED_H_
#define LED_H_

#include "../../MCAL/GPIO/gpio.h"
#include "avr/io.h"


void Led_Init(void);
void Led_Green(void);
void Led_Yellow(void);
void Led_Red(void);

#endif /* LED_H_ */
