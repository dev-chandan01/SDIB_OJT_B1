#include<stdio.h>

int (*fnptr) (int, int);

int add(int a, int b)
{
    return(a+b);
}

int sub(int a, int b)
{
    return(a-b);
}

int mul(int a, int b)
{
    return(a*b);
}

int div(int a, int b)
{
    return(a/b);
}

int main()
{
    int X;

    fnptr = add;
    X = (*fnptr) (10,20);
    printf("\nThe sum of 10 and 20 is :- %d", X);

    fnptr=sub;
    X = (*fnptr) (30,20);
    printf("\nThe difference of 30 and 20 is :- %d", X);

    fnptr=mul;
    X = (*fnptr) (30,20);
    printf("\nThe multiplication of 30 and 20 is :- %d", X);

    fnptr=div;
    X = (*fnptr) (30,5);
    printf("\nThe division of 30 and 5 is :- %d", X);
}

