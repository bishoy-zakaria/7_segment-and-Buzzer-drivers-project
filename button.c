#include "button.h"
#define F_CPU 16000000
#include <util/delay.h>
Uint8 putton_value(void)
{
	Uint8 putton=0;
	putton=Get_Bit(PIND,2);
	while(Get_Bit(PIND,2));
	_delay_ms(10);
	return putton;
}