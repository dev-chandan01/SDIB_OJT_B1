#include<stdio.h>

int main()
{
	float sum;
	int i,n;
	printf("Enter the value of N :- ");
	scanf("%d",&n);
	sum =0;
	for(i = 1; i <= n; ++i)
	{
		sum = sum + 1/(float)n;
		printf("%2d %6.4f\n",i,sum);
	}
}









































