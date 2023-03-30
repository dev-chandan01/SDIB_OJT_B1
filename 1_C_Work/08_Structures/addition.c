#include<stdio.h>

struct arith
{
    int a;
    int b;
    int res;
}val;

int add(int a, int b)
{
    return(a+b);
}

int main()
{
    printf("Enter the value of a:- ");
    scanf("%d",&val.a);
    printf("\nEnter the value of b:- ");
    scanf("%d",&val.b);

    val.res = add(val.a,val.b);
    
    printf("The sum is :- %d",val.res);
    
}