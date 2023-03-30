#include<stdio.h>
int main()
{
    int *p;
    int a = 10;
    p=&a;
    printf("\nAddress of variable is :- %p",&a);
    printf("\nValue of variable is :- %d",p);
    printf("\nValue of variable using pointer is :- %d",a);
    printf("\nAddress of variable using pointer is :- %p",&p);
}