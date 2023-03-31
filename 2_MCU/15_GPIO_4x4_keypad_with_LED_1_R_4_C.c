//============================================================================
//WAP for executing 1st ROW and all column using 4x4 matrix keypad with led
//for pressing key 1 blink led once
//for pressing key 2 blink led twice
//for pressing key 3 blink led thrice and so on...
//==============================================================================

//ROW = OUTPUT | COLOUMN = INPUT
//   ROW   | COLOUMN
//===================
//PC3= R4 | PC7= C4
//PC2= R3  | PC6= C3
//PC1= R2  | PC5= C2
//PC0= R1  | PC4= C1

//led = PA5(on board led)

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

void delay(int T)
{
	int i;
	while(T--)
	{
		for(i=0; i<5000; i++);
	}
}

void led_blink(uint8_t num)
{
	for(int i=0;i<num;i++)
	   {
	 	  GPIOA->ODR |= 1<<5;//led PA5 ON
	 	  delay(100);
	 	  GPIOA->ODR &= ~(1<<5);//led PA5 OFF
	 	  delay(100);
	   }
}
int main()
{

	led_init();
	keypad_init();
	while(1)
	{
		//GPIOC-> ODR &= ~0x1;
		GPIOC-> ODR |= 0xE;
        //delay(10);
		//if(((GPIOC->IDR & (1<<4))||(GPIOC->IDR & (1<<5) )||(GPIOC->IDR & (1<<6) )||(GPIOC->IDR & (1<<7) )))
		if(!(GPIOC->IDR & (1<<4)))
			{
			  led_blink(1);
			}
	else if(!(GPIOC->IDR & (1<<5)))
			{
		      led_blink(2);
			}
	else if(!(GPIOC->IDR & (1<<6)))
			{
		      led_blink(3);
            }
	else if(!(GPIOC->IDR & (1<<7)))
	        {
		      led_blink(4);
	        }
	else
	    {
	    	GPIOA->ODR &= ~(1<<5);//led PA5 OFF
	    }

//		GPIOC-> ODR |= 0x1;
//		delay(10);
   }
}
