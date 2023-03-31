//write a program to turn on 3 led using 3 switch.
//conditons :
// if we press the 1st switch 1st led turn on
// if we press the 2nd switch 1st and 2nd led turn on
// if we press the 3rd switch 1st,2nd and 3rd led turn on
//Take PA7, PA8 and PA9 as output pin.
// PB8, PB9 and PC9 as input pin.

#include "stm32f4xx.h"
#include<stdio.h>
void delay(int T)
{
	int i;
	while(T--)
	{
		for(i=0; i<5000; i++);
	}
}
int main()
{
	RCC->AHB1ENR |=0X07; ////Enable the clock for GPIOA & GPIOB
	GPIOA->MODER |=0X54000; //PA7,8,9 output pin(16>>5)PA8,9 (14>>1)
//	GPIOB->MODER |=0X0;    //PB8,9,PC9 input PIN
    GPIOB->PUPDR |=0X50000; //(16>>5)
    GPIOC->PUPDR |=0X40000;  //(18>>1)
	while(1)
	{
		if(!(GPIOB->IDR & 0X100))
		{
			GPIOA->ODR |= 0X80; //PA7
		}
		else
		{
			GPIOA->ODR &= ~0X80;
		}

		if(!(GPIOB->IDR & 0X200))
		{
			GPIOA->ODR |= 0X100; //PA8
			GPIOA->ODR |= 0X80; //PA7
		}
		else
		{
			GPIOA->ODR &= ~0X100;
			GPIOA->ODR &= ~0X80;
		}
		if(!(GPIOC->IDR & 0x200))
		{
			GPIOA->ODR |= 0X100; //PA8
			GPIOA->ODR |= 0X80; //PA7
			GPIOA->ODR |= 0x200; //PA9
		}
		else
		{
			GPIOA->ODR &= ~0X100;
			GPIOA->ODR &= ~0X80;
			GPIOA->ODR &= ~0x200;
		}


	}
}
