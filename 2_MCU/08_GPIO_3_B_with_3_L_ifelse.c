//write a program to turn on 3 led using 3 switch
// conditions :
// if we press 1st switch 1st led turn on then off.
// if we press 2nd switch 2nd led turn on then off.
// if we press 3rd switch 3rd led turn on then off.
//Take PA7, PA8 and PA9 as output pin.
//Take PB8, PB9 and PC9 as input pin.


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

	RCC->AHB1ENR |= 0x7; //ENABLING CLOCK FOR PORT A,B AND C
	GPIOA->MODER |= (1<<14)|(5<<16); //CONFIGURING PIN PA7, PA8 and PA9 IN OUTPUT MODE
	GPIOC->MODER |= 0X0;     //CONFIGURING PIN PB8, PB9 and PC9 IN INPUT MODE
	GPIOB->PUPDR |= (5<<16); //PULLUP TO PB8, PB9
	GPIOC->PUPDR |= (1<<18); //PULLUP TO PC9

	while(1)
	{
		//led=PA7,button=PB8
        if(!(GPIOB->IDR & 0x100))
		  {
        	  GPIOA ->  BSRR|= 0x80;
          }
        else
          {
        	  GPIOA ->  BSRR|= 0x800000;
           }

        //led=PA8,button=PB9
        if(!(GPIOB->IDR & 0x200))
           {
              GPIOA ->  BSRR|= 0x100;
            }
          else
            {
               GPIOA ->  BSRR|= 0x1000000;
            }

        //led=PA9,button=PC9
         if(!(GPIOC->IDR & 0x200))
        	{
               GPIOA ->  BSRR|= 0x200;
             }
           else
             {
               GPIOA ->  BSRR|= 0x2000000;
              }
	}
}
