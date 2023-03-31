#include "stm32f4xx.h"
#include<stdio.h>

void delay(int T)
{
	int i;
	while(T--)
	{
		for(i=0;i<5000;i++);
	}
}

/*ISR Subroutine*/
	void EXTI15_10_IRQHandler(void)
	{
		GPIOA->ODR ^= 0x20;
		for(int i =0;i<100000;i++);
		EXTI->PR |= 0x2000;
	}

void LED_Init()
{
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0X400;
}

void Button_Init()
{
	RCC->AHB1ENR |= 0x4;
	GPIOA->MODER |= 0X0;
}


int main()
{
	LED_Init();
	Button_Init();
	__disable_irq();
	/*ENABLE CLOCK FOR SYSCFG*/
	RCC->APB2ENR |= 0x4000;
	SYSCFG->EXTICR[3] |= 0x20;
	EXTI->IMR |= 0x2000;
	EXTI->RTSR |= 0X2000;
	NVIC_EnableIRQ(EXTI15_10_IRQn);
	__enable_irq();
	while(1)
	{

	}
}
