#include<stdio.h>
int main()
{
    #if defined EVEN
        int a=12,b=16;
    #else
    #if defined ODD
        int a=11,b=1;
    #else
        int a=0,b=0;
    #endif
    #endif
    printf("\n Sum of two numbers: %d\n",a+b); 
}