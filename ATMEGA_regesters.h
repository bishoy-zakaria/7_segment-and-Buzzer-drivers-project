#ifndef ATMAGA_regester_H_INCLUDED
#define ATMAGA_regester_H_INCLUDED
#include "STD.h"
/* *************************DIO REGESTERS************************** */
#define PORTA (*(volatile Uint8*)(0x3B))
#define PINA  (*(volatile Uint8*)(0x39))
#define DDRA  (*(volatile Uint8*)(0x3A))

#define PORTB (*(volatile Uint8*)(0x38))
#define PINB  (*(volatile Uint8*)(0x36))
#define DDRB  (*(volatile Uint8*)(0x37))

#define PORTC (*((volatile Uint8*)(0x35)))
#define PINC  (*((volatile Uint8*)(0x33)))
#define DDRC  (*((volatile Uint8*)(0x34)))

#define PORTD (*(volatile Uint8*)(0x32))
#define PIND  (*(volatile Uint8*)(0x30))
#define DDRD  (*(volatile Uint8*)(0x31))


#endif