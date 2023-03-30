#include<stdio.h>

struct arith
{
    int a;
    int b;
    int res;
}val;

void add(int a, int b, int *res)
{
    *res = a+b; 
}

int main()
{
    printf("Enter the value of a:- ");
    scanf("%d",&val.a);
    printf("\nEnter the value of b:- ");
    scanf("%d",&val.b);

    add(val.a,val.b,&val.res);
    
    printf("The sum is :- %d",val.res);
    
}