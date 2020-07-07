#include"DIO.h"
void DIO_SetPortDir(Uint8 port,Uint8 Dir)
{
	switch(port)
	{
		
	case DIO_PORTA :
	DDRA=Dir;
	break;
	
	case DIO_PORTB :
	DDRB=Dir;
	break;
	
	case DIO_PORTC :
	DDRC=Dir;
	break;
	
	case DIO_PORTD :
	DDRD=Dir;
	break;
	
	default:
	break;
}
}
void DIO_SetBinDir(Uint8 port,Uint8 pin,Uint8 Dir)
{
	
	switch(Dir)
	{
		case DIO_OUTPUT :
		switch(port)
		{
			case DIO_PORTA :
			Set_Bit(DDRA,pin);
			break;
			case DIO_PORTB :
			Set_Bit(DDRB,pin);
			break;
			case DIO_PORTC :
			Set_Bit(DDRC,pin);
			break;
			case DIO_PORTD :
			Set_Bit(DDRD,pin);
			break;
			default :
			break;
		}
		case DIO_INPUT :
		switch(port)
		{
			case DIO_PORTA :
			Clr_Bit(DDRA,pin);
			break;
			case DIO_PORTB :
			Clr_Bit(DDRB,pin);
			break;
			case DIO_PORTC :
			Clr_Bit(DDRC,pin);
			break;
			case DIO_PORTD :
			Clr_Bit(DDRD,pin);
			break;
			default :
			break;
		}
		
	}
}

void DIO_WritePort(Uint8 port,Uint8 val)
{
	switch(port)
	{
	case DIO_PORTA :
	PORTA=val;
	break;
	
	case DIO_PORTB :
	PORTB=val;
	break;
	
	case DIO_PORTC :
	PORTC=val;
	break;
	
	case DIO_PORTD :
	PORTD=val;
	break;
	
	default:
	break;
}
}

void DIO_WritePin(Uint8 port,Uint8 pin,Uint8 val)
{
	switch(val)
	{
		case PIN_HIGH :
		switch(port)
		{
			case DIO_PORTA :
			Set_Bit(PORTA,pin);
			break;
			case DIO_PORTB :
			Set_Bit(PORTB,pin);
			break;
			case DIO_PORTC :
			Set_Bit(PORTC,pin);
			break;
			case DIO_PORTD :
			Set_Bit(PORTD,pin);
			break;
			default :
			break;
		}
		case PIN_LOW :
		switch(port)
		{
			case DIO_PORTA :
			Clr_Bit(PORTA,pin);
			break;
			case DIO_PORTB :
			Clr_Bit(PORTB,pin);
			break;
			case DIO_PORTC :
			Clr_Bit(PORTC,pin);
			break;
			case DIO_PORTD :
			Clr_Bit(PORTD,pin);
			break;
			default :
			break;
		}
		
	}
}

void DIO_ReadPort(Uint8 port,Uint8* val)
{
	switch(port)
	{
	case DIO_PORTA :
	*val=PINA;
	break;
	
	case DIO_PORTB :
	*val=PINB;
	break;
	
	case DIO_PORTC :
	*val=PINC;
	break;
	
	case DIO_PORTD :
	*val=PIND;
	break;
	
	default:
	break;
}
}
void DIO_ReadPin(Uint8 port,Uint8 pin,Uint8*val)
{
	switch(port)
	{
	case DIO_PORTA :
	*val=Get_Bit(PINA,pin);
	break;
	case DIO_PORTB :
	*val=Get_Bit(PINB,pin);
	break;
	case DIO_PORTC :
	*val=Get_Bit(PINC,pin);
	break;
	case DIO_PORTD :
	*val=Get_Bit(PIND,pin);
	break;
	
	default :
	break;
}
}

void DIO_ToggelPin(Uint8 port,Uint8 pin)
{
	switch(port)
	{
	case DIO_PORTA :
	Toggle_Bit(PORTA,pin);
	break;
	case DIO_PORTB :
	Toggle_Bit(PORTB,pin);
	break;
	case DIO_PORTC :
	Toggle_Bit(PORTC,pin);
	break;
	case DIO_PORTD :
	Toggle_Bit(PORTD,pin);
	break;
	default:
	break;
}
}