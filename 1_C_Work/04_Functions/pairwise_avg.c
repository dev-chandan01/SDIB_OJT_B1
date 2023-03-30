#include<stdio.h>
void pair_avg(float, float, float);
int main()
{
	float a,b,c;
	printf("Enter the 1st no:- ");
	scanf("%f",&a);
	printf("Enter the 2nd no:- ");
	scanf("%f",&b);
	printf("Enter the 3rd no:- ");
	scanf("%f",&c);
	
	pair_avg(a,b,c);
}

void pair_avg(float a, float b, float c)
{
	
	float a1,a2,a3;

    a1 = (a+b)/2;
    printf("The average of %f and %f is :- %f",a,b,a1);
    a2 = (b+c)/2;
    printf("\nThe average of %f and %f is :- %f",b,c,a2);
    a3 = (a+c)/2;
    printf("\nThe average of %f and %f is :- %f",b,c,a3);

}
