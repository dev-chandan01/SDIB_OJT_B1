//Write a c program to turn on Led when we press the switch and
//turn off Led if again we press the switch
//Take Input pin PC9 and Output pin PA8

#include "stm32f4xx.h"
#include <stdio.h>

void delay(int T)
{
	int i;
	while(T--){
	for(i=0;i<5000;i++);}
}


int main()
{

	RCC->AHB1ENR |= 0x5; //ENABLING CLOCK FOR PORT A AND C
	GPIOA->MODER |= 0X10000; //CONFIGURING PIN PA8 IN OUTPUT MODE
	GPIOC->MODER |= 0X0;     //CONFIGURING PIN PC9 IN INPUT MODE
	GPIOC->PUPDR |= 0x40000;
	uint8_t press = 1;
	while(1)
	{
        if(!(GPIOC->IDR & 0x200))
		  {
			  press++;
		      printf("%d",press);

		       if(press % 2 == 0)
		       {
				   GPIOA -> ODR |= 0x100;
				   delay(100);
		       }
		       else
		       {
				   GPIOA -> ODR &= ~0x100;
				   delay(100);
		       }

		  }
	}
}
