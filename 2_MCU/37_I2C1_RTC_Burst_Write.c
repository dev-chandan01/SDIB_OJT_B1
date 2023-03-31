/*
 * RTC_BurstWrite
 * ================
 * Connections
 * ================
 * I2C1_SCL-PB08
 * I2C1_SDA-PB09
 * ================
 */

#include "stm32f4xx.h"

#define SLAVE_ADDER 0x68 //110 1000 . DS1307
//#define MEMORY_ADDER 0x08
void delayMs(int);       //Declaration
void I2C1_init(void);    //Declaration
int I2C1_burstWrite(char, char, int, char* ); //Declaration

//Start main()
int main (void)
{
	char timeDateToSet[15]={0x50,0x28,0x15,0x03,0x14,0x12,0x22,0};//initialization
	I2C1_init();   //Call
	I2C1_burstWrite(SLAVE_ADDER, 0, 7, timeDateToSet); //Call
	while(1){}
}
//End main()

void I2C1_init(void)
{
	//ENABLE CLOCK
	RCC->AHB1ENR  |= 2;        //(1<<1)Enable GPIOB clock for PB08 and PB09
	RCC->APB1ENR  |= 200000;   //(1<<21)Enable I2C1 clock

	//CONFIGURE PB8,PB9 PINS FOR I2C1
	GPIOB->MODER  &= ~0xF0000; //(8<<16)RESET PB08 and PB09 pin
	GPIOB->MODER  |= 0xA0000;  //(8<<16)Use PB08,PB09 as ALTERNATE pin

	GPIOB->AFR[1] &= ~0xFF;    //RESET the ALTERNATE pin
	GPIOB->AFR[1] |= 0x44;     //SET the ALTERNATE pin

	GPIOB->OTYPER |= 0x300;      //(2<<8)OUTPUT-OPEN-DRAIN for pin PB08,PB09

	GPIOB->PUPDR  &= ~0xF0000; //RESET the PULL-UP register pin for PB08,PB09
	GPIOB->PUPDR  |= 0x50000;  //SET the PULL-UP register pin for PB08,PB09	[First we make these pin HIGH]

	I2C1->CR1  = 0x8000;       //(1<<15)SOFTWARE RESET I2C1{SWRST}
	I2C1->CR1 &= ~0x8000;      //(1<<15)Out of RESET

	I2C1->CR2  = 0x10;         //(1<<4)PERIPHERAL clock is 16MHz
	I2C1->CCR  = 0x50;         //(80 in decimal)STANDARD mode, [100KHz clock]

	I2C1->TRISE = 0x11;        //(17 in decimal)MAXIMUM-RISE time

	I2C1->CR1 |= 0x1;          //(1<<0)Enable the PERIPHERAL CLOCK ,[Enable I2C1 module]{PE}
}

int I2C1_burstWrite(char saddr, char maddr, int n, char* data )
{
	int i;
	volatile int temp;          //temp for clock stretching

   //GENERATE START
   while(I2C1->SR2 & 2);       //wait until BUS not BUSY. {BUSY}
   I2C1->CR1 &= ~0x800;        //disable POS [Acknowledge/PEC position(for data reception)]
   I2C1->CR1 |= 0x100;         //generate START {START}

   //SLAVE ADDRESS
   while(!(I2C1->SR1 & 1));    //wait until START flag is SET {SB}
   I2C1->DR = saddr<<1;        //transmit SLAVE ADDRESS
   //I2C1->CR1 |= 0x400;       //Enable Acknowledgment {ACK}

   //MEMORY LOCATION ADDRESS
   while(!(I2C1->SR1 & 2));    //wait until ADDRESS FLAG is SET
   temp = I2C1->SR2;           //clear ADDRESS FLAG
   while(!(I2C1->SR1 & 0x80)); //wait until DATA REGESTER empty {TxE}
   I2C1->DR = maddr;           //send MEMORY ADDRESS
   //I2C1->CR1 |= 0x400;       //Enable Acknowledgment {ACK}

   //SENDING DATA
   for(i=0;i<n;i++)
   {
	   while(!(I2C1->SR1 & 0x80)); //wait until DATA REGESTER empty {TxE}
	   I2C1->DR = *data++;            //transmit DATA
	   //I2C1->CR1 |= 0x400;         //Enable Acknowledgment {ACK}
   }

   //GENERATE STOP
    while(!(I2C1->SR2 & 4));    //wait until transfer finished. {BTF}
    I2C1->CR1 |= 0x200;         //generate STOP {STOP}

}
