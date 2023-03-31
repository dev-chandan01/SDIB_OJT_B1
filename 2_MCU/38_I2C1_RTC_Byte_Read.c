/*
 * RTC_ByteRead
 * ================
 * Connections
 * ================
 * LED-PA05
 * I2C1_SCL-PB08
 * I2C1_SDA-PB09
 * ================
 */

#include "stm32f4xx.h"

#define SLAVE_ADDER 0x68 //110 1000 . DS1307
#define MEMORY_ADDER 0x08
void delayMs(int);       //Declaration
void I2C1_init(void);    //Declaration
int I2C1_byteWrite(char, char, char* ); //Declaration

//Start main()
int main(void)
{
	I2C1_init();   //call
	char data;     //initialization

	//CONFIGURATION OF PA05 FOR THE GREEN LED(LD2)
	RCC->AHB1ENR |=1;           //(1<<0)Enable GPIOA clock
	GPIOA->MODER &=~0xC00;      //(1<<10)Reset PA05
	GPIOA->MODER |= 0x400;      //(1<<10)SET PA05 pin as OUTPUT

	while(1)
	{
		I2C1_byteWrite(SLAVE_ADDER, MEMORY_ADDER , &data); //Call
		if(data & 1)
			GPIOA->ODR |= 0x20;  //TURN ON LED
		else
			GPIOA->ODR &= ~0x20;  //TURN OFF LED
		    delayMs(10);
	}
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

int I2C1_byteWrite(char saddr, char maddr, char* data)
{
   volatile int temp;          //temp for clock stretching

   //GENERATE START
   while(I2C1->SR2 & 2);       //wait until BUS not BUSY. {BUSY}
   I2C1->CR1 |= 0x100;         //generate START {START}

   //SLAVE ADDRESS
   while(!(I2C1->SR1 & 1));    //wait until START flag is SET {SB}
   I2C1->DR = saddr<<1;        //transmit SLAVE ADDRESS
   I2C1->CR1 |= 0x400;         //Enable Acknowledgment {ACK}

   //MEMORY LOCATION ADDRESS
   while(!(I2C1->SR1 & 2));    //wait until ADDRESS FLAG is SET
   temp = I2C1->SR2;           //clear ADDRESS FLAG
   while(!(I2C1->SR1 & 0x80)); //wait until DATA REGESTER empty {TxE}
   I2C1->DR = maddr;           //send MEMORY ADDRESS
   I2C1->CR1 |= 0x400;         //Enable Acknowledgment {ACK}

   //GENERATING RESTART
   while(!(I2C1->SR1 & 0x80)); //wait until DATA REGESTER empty {TxE}
   I2C1->CR1 |= 0x100;         //Generate Restart


   //SLAVE ADDRESS+READ
   while(!(I2C1->SR1 & 1));    //wait until START flag is SET {SB}
   I2C1->DR = saddr<<1|1;      //transmit SLAVE ADDRESS
   I2C1->CR1 |= 0x400;         //Enable Acknowledgment {ACK}

   //GENERATE STOP
   while(!(I2C1->SR1 & 2));    //wait until ADDRESS FLAG is SET
   I2C1->CR1 &= ~0x400;        //Disable Acknowledgment {ACK}
   temp=I2C1->SR2;             //Clear addr flag
   I2C1->CR1 |= 0x200;         //generate STOP {STOP}

   //READ DATA
   while(!(I2C1->SR1 & 0x40)); //Wait until RXNE flag is SET
   *data++=I2C1->DR;           //READ DATA from DR
   return 0;
}

void delayMs(int n)
{
	int i;
	for(;n>0;n--)
		for(i=0;i<3195;i++);
}
