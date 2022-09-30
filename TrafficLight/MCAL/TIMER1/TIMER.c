/*
 * TIMER.c
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */

#include "TIMER.h"
#include "avr/io.h"

static void(*CallBackPtr)(void);

void TIMER1_INIT(void)
{
	SET_BIT(TCCR1A,FOC1B);
	SET_BIT(TCCR1B,WGM12);
	SET_BIT(TCCR1B,WGM13);
	SET_BIT(TCCR1B,CS12);
	SET_BIT(TCCR1B,CS10);

	TCNT1 = 0;
	ICR1 = 975;

	SET_BIT(TIMSK,OCIE1B);
}

void __vector_8(void) __attribute__((signal,used));

void __vector_8(void){

	CallBackPtr();

}

void TIMER1_SetCallBack(void (*Ptr)(void))
{
	CallBackPtr = Ptr ;
}

