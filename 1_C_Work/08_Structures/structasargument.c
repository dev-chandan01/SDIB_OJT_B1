#include<stdio.h>

struct arith
{
    int a;
    int b;
    int res;
}val;

void add(struct arith val)
{
    val.res = val.a+val.b;
    printf("The sum is :- %d",val.res);
}

int main()
{
    //struct arith val = {.a = 0, .b = 5, .res = 2};
    printf("Enter the value of a:- ");
    scanf("%d",&val.a);
    printf("\nEnter the value of b:- ");
    scanf("%d",&val.b);

    add(val);
    
    //printf("Main The sum is :- %d",val.res); //It is of no use as 
    
}