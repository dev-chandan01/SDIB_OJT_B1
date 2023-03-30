#include<stdio.h>

int main()
{
	char a;
	printf("Enter a character:- ");
	scanf("%c",&a);
	
	if(a >= 65 && a <= 90)
	{
		printf("The character %c is a alphabet",a);
	}
	else if(a >= 97 && a <= 122)
	{
		printf("The character %c is a alphabet",a);
	}
	else
	{
		printf("The character %c is not a alphabet",a);
	}
}
