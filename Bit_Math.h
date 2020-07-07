#ifndef Bit_Math_H_INCLUDED
#define Bit_Math_H_INCLUDED
#define Set_Bit(Byte,Bit)  (Byte |= (1<<Bit))
#define Clr_Bit(Byte,Bit)  (Byte &=~(1<<Bit))
#define Toggle_Bit(Byte,Bit) (Byte ^=(1<<Bit))
#define Get_Bit(Byte,Bit)   (Byte>>Bit & (1))
#endif // STD_H_INCLUDED
