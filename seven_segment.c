#include "seven_segment.h"
void seven_segment(Uint8 port,Uint8 val)
{
		DIO_WritePort(port,(val<<4));
}