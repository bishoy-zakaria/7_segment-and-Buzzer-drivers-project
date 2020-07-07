
#include "Bit_Math.h"
#include "ATMEGA_regesters.h"
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define DIO_OUTPUT 1
#define DIO_INPUT 0

#define PORT_OUTPUT 0xFF
#define PORT_INPUT  0X00

#define PIN_HIGH 1
#define PIN_LOW 0

#define PORT_HIGH 0xFF
#define PORT_LOW 0x00

void DIO_SetPortDir(Uint8 port,Uint8 Dir);
void DIO_SetBinDir(Uint8 port,Uint8 pin,Uint8 Dir);

void DIO_WritePort(Uint8 port,Uint8 val);
void DIO_WritePin(Uint8 port,Uint8 pin,Uint8 val);

void DIO_ReadPort(Uint8 port,Uint8* val);
void DIO_ReadPin(Uint8 port,Uint8 pin,Uint8* val);

void DIO_ToggelPin(Uint8 port,Uint8 pin);