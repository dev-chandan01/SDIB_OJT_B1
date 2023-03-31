#include"stm32f4xx.h"
#include"main.h"
int timeStamp = 0;

int main(void)
{
	// Compare PA5 as output mode TIM2_CH1
	RCC->AHB1ENR |= 1;                             // Enable GPIO clock
	GPIOA->MODER &=~0x00000C00;                    // Clear pin mode
	GPIOA->MODER |= (1<<11);                       // Set the pin to alternate pin
	GPIOA->AFR[0] &=~(0xF<<20);                    // Set pin to AF1 bits
	GPIOA->AFR[0] |= (1<<20);                      // Set pin to AF1 for TIM2 CH1

	// Configure TIM2 to wrap around at 1 Hz
	// and toggle CH1 output when the counter value is 0

	RCC->APB1ENR |= 1;                             // Enable TIM2 clock
	TIM2->PSC = 1600 -1;                           // Divided by 1600
	TIM2->ARR = 10000 - 1;                         // Divided by 10,000
	TIM2->CCMR1 = 0x30;                            // Set output toggle on match
	TIM2->CCR1 = 0;                                 // Set match value
	TIM2->CCER |= 1;                               // Enable ch1 compare mode
	TIM2->CNT = 0;                                 // clear counter
	TIM2->CR1 = 1;                                 // Enable TIM2;

//	configure PA6 as input of TIM3 CH1

	RCC->AHB1ENR |= 1;                             // Enable GPIOA clock
	GPIOA->MODER &=~0x3000;                        // CLear Pin mode
	GPIOA->MODER |= 0x2000;                        // Set pin to alternate function
	GPIOA->AFR[0]&= ~(0xF<<24);                    // clear pin AF bits
	GPIOA->AFR[0]|=((1<<25));                      // Set pin to AF2 for TIM3 CH1

//	Configure TIM3 to do input capture with present with prescalar ...as 16MHz/16000 given

	RCC->APB1ENR |= 2;                             // Enable TIM3 clock
	TIM3->PSC = 16000 - 1;                         // divided by 16000
	TIM3->CCMR1 = 0x41;                            // set CH1 to capture at every...
	TIM3->CCER = 1;                                // enable CH 1 capture rising
	TIM3->CR1 = 1;                                 // Enable TIM3
	while(1)
	{
		while(!(TIM3->SR & 2)){}                  // wait until input edge is capture
		timeStamp = TIM3->CCR1;                   // read capture counter value
	}
}
