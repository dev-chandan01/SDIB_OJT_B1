//using 4x4 matrix keypad with led
//ROW = OUTPUT | COLOUMN = INPUT
//   ROW   | COLOUMN
//===================
//PC3= R4 | PC7= C4
//PC2= R3  | PC6= C3
//PC1= R2  | PC5= C2
//PC0= R1  | PC4= C1

//led = PA5

#include "stm32f4xx.h"
#include<stdio.h>

void led_init()
{
  RCC->AHB1ENR |= 1<<0; //ENABLING CLOCK FOR PORT A
  GPIOA->MODER |= 1<<10; //CONFIGURING PIN PA5 IN OUTPUT MODE

}

void keypad_init()
{
	  RCC->AHB1ENR |= 1<<2; //ENABLING CLOCK FOR PORT C
	  GPIOC->MODER |= 5<<0|5<<4; //CONFIGURING PIN PC0,PC1,PC2,PC3 IN OUTPUT MODE
	  //GPIOC->MODER |= 0X0;     //CONFIGURING PIN PC4,PC5,PC6,PC7 IN INPUT MODE
	  //GPIOB->PUPDR |= 2<<6|2<<8|2<<10|2<<20;
	  GPIOC->PUPDR |= 5<<8|5<<12;//PULLUP TO PIN PC4,PC5,PC6,PC7
}

int main()
{
	led_init();
	keypad_init();
	while(1)
	{
		//GPIOC-> ODR &= ~0xF;

		//if(!((GPIOC->IDR & (1<<4))||(GPIOC->IDR & (1<<5) )||(GPIOC->IDR & (1<<6) )||(GPIOC->IDR & (1<<7) )))
		if((!(GPIOC->IDR & (1<<4)))|(!(GPIOC->IDR & (1<<5)))|(!(GPIOC->IDR & (1<<6)))|(!(GPIOC->IDR & (1<<7))))
			{
                GPIOA->ODR |= 1<<5;//led PA5 ON
			}
		else
			{
				GPIOA->ODR &= ~(1<<5);//led PA5 OFF
			}
    }
}
