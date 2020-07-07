#include "LED.h"
#include "DIO.h"
void LED_init(Uint8 port,Uint8 pin)
{
	DIO_ToggelPin(port,pin);
}
