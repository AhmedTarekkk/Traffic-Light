#include "HAL/Led/Led.h"
#include "MCAL/TIMER1/TIMER.h"
#include "HAL/SevenSegment/SevenSegment.h"
#include "HAL/LCD/lcd.h"

unsigned char led = 1;
extern signed char time;

void TIMER1_ISR()
{
	time--;
}

int main(void)
{
	SevenSegment_INIT();
	LCD_init();

	TIMER1_INIT();
	TIMER1_SetCallBack(TIMER1_ISR);

	Led_Init();

	sei();

	LCD_displayStringRowColumn(1, 2, "Secs Remaining");

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
		LCD_moveCursor(0, 8);
		LCD_intgerToString(time);
		LCD_displayCharacter(' ');
	}
}
