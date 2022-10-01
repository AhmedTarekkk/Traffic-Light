/*
 * SevenSegment.h
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */

#ifndef SEVENSEGMENT_H_
#define SEVENSEGMENT_H_

#include "../../MCAL/GPIO/gpio.h"
#include "avr/io.h"

void SevenSegment_INIT(void);
void SevenSegment_writeNum(unsigned char num);

#endif /* SEVENSEGMENT_H_ */
