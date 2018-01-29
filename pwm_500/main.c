
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRB=0b00000011;
	
	while (1)
	{
		if(PINB & (1<<PINB3))
		{
			PORTB=(1<<PORTB1);
			PORTB &=~(1<<PORTB0);
			
			
		}
		
		else if(PINB & (1<<PINB4))
		
		{
			PORTB&=~(1<<PORTB1);
			PORTB =(1<<PORTB0);
			
			
			
		}
	}
}
