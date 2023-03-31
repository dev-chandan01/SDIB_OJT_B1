#include "stm32f4xx.h"
#include <stdio.h>
void motor_init()
{
	RCC->AHB1ENR |=0x1;
	GPIOA->MODER |=0X10000;

}
void sw_init()
{
	RCC->AHB1ENR |=0x4;
	GPIOC->MODER |=0X0;
}
void operation()
{
		if(GPIOC->IDR & 0x2000)
		{
			//LED OFF
			GPIOA->ODR &= ~0x100;
			//delay(100);
		}
		else
		{
			//LED ON
			GPIOA->ODR |=0x100;
			//delay(100);
		}
}
int main()
{
	motor_init();
	sw_init();
	while(1)
	{
		operation();
	}

}
