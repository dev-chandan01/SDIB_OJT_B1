#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the angle 1:- ");
	scanf("%d",&a);
	printf("Enter the angle 2:- ");
	scanf("%d",&b);
	printf("Enter the angle 3:- ");
	scanf("%d",&c);
	
	if(a+b >c || b+c > a || c+a > b)
	{
		printf("The triangle is Valid Triangle.");
	}
	else
	{
		printf("The triangle is not a valid Triangle.");
	}
}
