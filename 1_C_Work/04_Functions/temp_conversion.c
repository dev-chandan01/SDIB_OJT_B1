#include<stdio.h>

int main()
{
	int cho;
	float temp;
	top:
	printf("\n1. Celcius to Farhenite\n2. Farhenite to Celcius\nEnter your choice :- \n");
	scanf("%d",&cho);
	
	
	switch(cho)
	{
		case 1:
			printf("Enter the temperature to be converted:- ");
			scanf("%f",&temp);
			printf("\nConverting Celcius to Farhenite....\n");
			temp = (temp * 9/5)+ 32;
			printf("The temperature in Farhenite is :- %f\n",temp);
			break;
			
		case 2:
			printf("Enter the temperature to be converted:- ");
			scanf("%f",&temp);
			printf("Converting Farhenite to Celcius....\n");
			temp = (temp-32) * 5/9;
			printf("The temperature in Farhenite is :- %f\n",temp);
			break;
		default:
			printf("Invalid Choice!!!! :: Enter a valid choice....");
			goto top;
	}
	
	
	
}
