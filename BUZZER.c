#include "BUZZER.h"
void Buzzer_init(Uint8 port,Uint8 pin)
{
	DIO_ToggelPin(port,pin);
}