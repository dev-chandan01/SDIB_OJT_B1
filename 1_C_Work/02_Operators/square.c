#include<stdio.h>

int main()
{
	int a =1, n;
	printf("Enter the value of N :- ");
	scanf("%d",&n);
	while(a<n)
	{
		printf("%d",a*a);
		a++;
	}
}
