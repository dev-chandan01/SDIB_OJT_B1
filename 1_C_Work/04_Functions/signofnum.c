#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number to be validated:- ");
	scanf("%d",&n);
	
	if(n >= 0)
	{
		printf("%d is a positive number.",n);
	}
	else
	{
		printf("%d is a negative number.",n);
	}
}
