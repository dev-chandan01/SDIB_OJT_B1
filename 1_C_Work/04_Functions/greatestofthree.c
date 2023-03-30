#include<stdio.h>
int greatest(int, int, int);
int main()
{
	int a,b,c,g;
	printf("Enter the 1st no:- ");
	scanf("%d",&a);
	printf("Enter the 2nd no:- ");
	scanf("%d",&b);
	printf("Enter the 3rd no:- ");
	scanf("%d",&c);
	
	g = greatest(a,b,c);

	printf("The greatest no is :- %d",g);
}

int greatest(int a, int b, int c)
{
	return (a>b?(a>c?a:c):(b>c?b:c));
}
