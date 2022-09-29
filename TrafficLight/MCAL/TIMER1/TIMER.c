/*
 * TIMER.c
 *
 *  Created on: Sep 29, 2022
 *      Author: Ahmed
 */

#include "TIMER.h"
#include "avr/io.h"

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

ISR(TIMER1_COMPB_vect) // Interrupt service routine to control the watch time
{
	time--;
}
