#include<stdio.h>

int main()
{
	char a;
	printf("Enter a character:- ");
	scanf("%c",&a);
	
	if(a == 'A' || a == 'E'||a == 'I'||a == 'O'||a == 'U')
	{
		printf("The character %c is a Vowel",a);
	}
	else if(a == 'a' || a == 'e'||a == 'i'||a == 'o'||a == 'u')
	{
		printf("The character %c is a Vowel",a);
	}
	else
	{
		printf("The character %c is a consonant",a);
	}
}
