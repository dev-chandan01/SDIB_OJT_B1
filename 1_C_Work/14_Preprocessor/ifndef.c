#include<stdio.h>
#ifndef NEGATIVE
#define POSITIVE
#endif
int main()
{
    #ifdef POSITIVE
    int a=10,b=20;
    #endif

    #ifdef NEGATIVE
    int a=-10,b=-20;
    #endif

    printf("\n%d + %d = %d\n",a,b,a+b);
}