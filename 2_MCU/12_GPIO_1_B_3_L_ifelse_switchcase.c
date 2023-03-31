//write a program using 3 led and 1 switch
//conidtion :
// if we press the switch 1st time 1st led will turn on.
// if we press the switch 2nd time 2nd led will turn on.
// if we press the switch 3rd time 3rd led will turn on.
//after releasing switch leds will be in off state.
//also show the num of times switch pressed.
//Take PA7, PA8 and PA9 as output pin.
// PB8 as input pin.

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
void gpio_init()
{
   RCC->AHB1ENR |=0X03; ////Enable the clock for GPIOA & GPIOB
   GPIOA->MODER |=0X54000; //PA7,8,9 output pin(5<<16)PA8,9 (1<<14)
   GPIOB->PUPDR |=1<<16;  //INPUT PIN PB8
}
int main()
{
	gpio_init();
	int press=0;
	while(1)
	{
		if(!(GPIOB->IDR & 0x100))
				{  press++;
			switch(press)
					{
					case 1:
						 GPIOA->ODR |= 0x80;
						 delay(100);
						 break;
					case 2:
						 GPIOA->ODR |=0x100;
						 delay(100);
						 break;
					case 3:
						 GPIOA->ODR |=0x200;
						 delay(100);
						 break;

					default:
						 press=0;
					}
				}


		else
		{
			 GPIOA->ODR &= ~0x80;
			 GPIOA->ODR &= ~0x100;
    		 GPIOA->ODR &= ~0x200;
		}

	}

}
