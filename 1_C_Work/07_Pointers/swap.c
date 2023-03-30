#include<stdio.h>

void swapping(int *,int *);

int main()
{
    int a= 10, b= 20;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    printf("\nBefore swapping a = %d and b = %d",*p1,*p2);
    swapping(p1,p2);
    printf("\nAfter swap a = %d and b = %d", *p1,*p2);

}

void swapping(int *c, int *d)
{
    int temp;
    temp = *d;
    *d = *c;
    *c = temp;

    printf("\nAfter swap a = %d and b = %d", *c,*d);

}