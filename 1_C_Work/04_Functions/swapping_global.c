#include<stdio.h>

int a =10, b= 20;

int main()
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d\nb = %d\n",a,b);
}