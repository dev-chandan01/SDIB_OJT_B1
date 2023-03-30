#include<stdio.h>

int add(int,int);

int main()
{
	int x ,y,sum;
	printf("\nEnter value of x:- ");
	scanf("%d",&x);
	printf("\nEnter value of y:- ");
	scanf("%d",&y);
	sum = add(x,y);	
	printf("\nSum of %d and %d is:- %d \n ",x,y,sum);
	
}

int add(int x, int y)
{
	int i = x+y;
	return(i);

}
