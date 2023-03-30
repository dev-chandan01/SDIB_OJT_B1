#include<stdio.h>

struct arith
{
    int a;
    int b;
    int res;
}val;

struct arith add(struct arith A)
{
    A.res = A.a+A.b;
    return A;
}

int main()
{
    struct arith *p;
    p = &val;
    printf("Enter the value of a:- ");
    scanf("%d",&val.a);
    printf("\nEnter the value of b:- ");
    scanf("%d",&val.b);

    val = add(val);
    printf("The sum is :- %d",(*p).a);
    printf("The sum is :- %d",(*p).res);
    
}