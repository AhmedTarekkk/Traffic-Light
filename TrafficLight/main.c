#include "HAL/Led/Led.h"
#include "MCAL/TIMER1/TIMER.h"
#include "HAL/SevenSegment/SevenSegment.h"

unsigned char led = 1;
extern signed char time;

int main(void)
{
	SevenSegment_INIT();
	TIMER1_INIT();
	Led_Init();
	Led_Green();
	sei();
	while(1)
	{
		if(time >= 0)
		{
			SevenSegment_writeNum(time);
		}
		else
		{
			switch(led)
			{
				case 0: Led_Green(); break;
				case 1:	Led_Yellow(); break;
				case 2:	Led_Red(); break;
			}
			led++;
			if(led > 2)
			{
				led = 0;
			}
		}
	}
}
