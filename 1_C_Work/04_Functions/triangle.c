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
	
	if(a==b && b==c && c==a)
	{
		printf("The triangle is a Equivalent Triangle.");
	}
	else if(a==b || a==c || b == c)
	{
		printf("The triangle is a Isosceles Triangle.");
	}
	else
	{
		printf("The triangle is a Scalen Triangle.");
	}
	
}
