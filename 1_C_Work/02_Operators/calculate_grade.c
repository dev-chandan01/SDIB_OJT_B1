#include<stdio.h>

int main()
{
	float p,c,m,cp,t,avg;
	printf("Enter the marks of the subjects:-");
	scanf("%f\n",&p);
	scanf("%f\n",&c);
	scanf("%f\n",&m);
	scanf("%f\n",&cp);
	scanf("%f",&t);
	avg = (p+c+m+cp+t)/5;
	
	if(avg >= 91 && avg<=100)
	{
		printf("A Grade");
	}
	else if(avg >= 81 && avg<=90)
	{
		printf("B Grade");
	}
	else if(avg >= 71 && avg<=80)
	{
		printf("C Grade");
	}
	else if(avg >= 61 && avg<=70)
	{
		printf("D Grade");
	}
	else if(avg >= 51 && avg<=60)
	{
		printf("E Grade");
	}
	else if(avg >= 41 && avg<=50)
	{
		printf("E1 Grade");
	}
	else
	{
		printf("F Grade (Failed)");
	}
	
}
