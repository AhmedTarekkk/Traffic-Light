/*
 * TIMER.h
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "../../LIB/common_macros.h"
#include <avr/interrupt.h>

extern signed char time;

void TIMER1_INIT(void);

void TIMER1_SetCallBack(void (*Ptr)(void));

#endif /* TIMER_H_ */
