#include<stdio.h>

int cube(int x);

int main()
{
	int input, answer;
	printf("Enter the no to be cubed:-");
	scanf("%d", &input);
	
	answer = cube(input);
	printf("The cube of %d  is :- %d",input,answer);
}

int cube(int x)
{
	int cubed;
	cubed = x*x*x;
	return cubed;
}
