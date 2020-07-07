/*
 * driver.c
 *
 * Created: 7/3/2020 1:41:15 PM
 * Author : bisho
 */ 

//#include <avr/io.h>
#include "Bit_Math.h"
#include "ATMEGA_regesters.h"
#include "DIO.h"
#include "LED.h"
//#include "seven_segment.h"
#include "button.h"
//Uint8 putton_value(void);
#define F_CPU 16000000
#include <util/delay.h>
int main(void)
{
    DIO_SetPortDir(DIO_PORTA,PORT_OUTPUT);
	DIO_SetBinDir(DIO_PORTB,DIO_PIN2,PORT_OUTPUT);
	DIO_SetBinDir(DIO_PORTB,DIO_PIN0,PORT_INPUT);
	DIO_WritePort(DIO_PORTB , 0x02);
	Uint8 count=9;
    while(1)
    {
	    if(putton_value())
		{
		    DIO_WritePort(DIO_PORTA , (count << 4));
			
			if(count==0)
			{
				DIO_ToggelPin(DIO_PORTA,DIO_PIN3);
				_delay_ms(250);
				DIO_ToggelPin(DIO_PORTA,DIO_PIN3);
				_delay_ms(250);
				count=9;
			}
			count--;
			_delay_ms(500);
		}
	}
}
/*Uint8 putton_value(void)
{
	Uint8 x = Get_Bit(PINB,0);
	while(Get_Bit(PINB,0));
	_delay_ms(250);
	return x;
}*/
