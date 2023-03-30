#include<stdio.h>

int input();

int main()
{
	int x;
	x = input();
	printf("You Entered:- %d",x);
	
	
	
}

int input()
{
	int i;
	printf("Enter a value:- ");
	scanf("%d\n",&i);
	return(i);
}
