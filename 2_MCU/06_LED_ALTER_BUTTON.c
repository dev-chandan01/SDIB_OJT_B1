#include "stm32f4xx.h"
#include <stdio.h>

int main()
{
	RCC->AHB1ENR |= 5;
	GPIOA->MODER |= 0X10000;  //PA8  LED OUTPUT
	GPIOA->MODER |= 0X40000;  //PA9  LED OUTPUT
	GPIOC->MODER |= 0X0;
	GPIOC->PUPDR |= 0x10000; //PC8 PULL UP
	GPIOC->PUPDR |= 0X40000;  //PC9 PULL UP

	while(1)
	{

		if((GPIOC->IDR & 0x100)==0)
		{
			GPIOA->ODR |= 0x100; // 0000 0001 0000 0000 LED1 ON
			GPIOA->ODR &= ~0x200; // 0000 0001 0000 0000 LED 2 OFF

		}
		else if((GPIOC->IDR & 0x200)==0)
		{
			GPIOA->ODR &= ~0x100; // 0000 0001 0000 0000 LED1 OFF
			GPIOA->ODR |= 0x200; // 0000 0001 0000 0000 LED 2 ON
		}

	}
}

