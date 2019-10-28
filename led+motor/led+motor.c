#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
   DDRA=0xff;
   DDRC=0xff;

   while(1)
   {
       PORTA=0b10000000;
	   PORTC=0b10000000;
	   _delay_ms(50);
	   PORTC=0b11000000;
	   _delay_ms(50);
	   PORTC=0b11100000;
	   _delay_ms(50);
	   PORTC=0b11110000;
	   _delay_ms(50);
	   PORTC=0b11111000;
	   _delay_ms(50);
	   PORTC=0b11111100;
	   _delay_ms(50);
	   PORTC=0b11111110;
	   _delay_ms(50);
	   PORTC=0b11111111;
	   _delay_ms(50);
	   PORTC=0b00000000;
	   _delay_ms(100);
	   PORTA=0b01000000;
	   PORTC=0b10000000;
	   _delay_ms(50);
	   PORTC=0b10000001;
	   _delay_ms(50);
	   PORTC=0b10000011;
	   _delay_ms(50);
	   PORTC=0b10000111;
	   _delay_ms(50);
	   PORTC=0b10001111;
	   _delay_ms(50);
	   PORTC=0b10011111;
	   _delay_ms(50);
	   PORTC=0b10111111;
	   _delay_ms(50);
	   PORTC=0b11111111;
	   _delay_ms(50);
	   
	   
	   }
	   }
