//Two switch and one led
//condition :
// if we press the 1st switch led will turn on.
// if we press the 2nd switch led will turn off.
//Take PA7 as output pin
//PB8 and PB9 as input pin

#include "stm32f4xx.h"
#include<stdio.h>

int main()
{
	RCC->AHB1ENR |=0x03;   //ENABLE clock for PA and PB
	GPIOA->MODER |=1<<14; //PA7
	GPIOB->PUPDR |=5<<16; //PB8,9

	while(1)
	{
		if(!(GPIOB->IDR & 0X100))   //pb8
		{
			GPIOA->ODR |= 0X80; //PA7
		}

	    if(!(GPIOB->IDR & 0X200)) //pb9
		{
			GPIOA->ODR &= ~0X80; //PA7
		}

	}
}
