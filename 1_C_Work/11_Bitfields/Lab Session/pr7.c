#include<stdio.h>

struct std
{
    int a : 20;
    int b : 12;
    int c : 20;
    int d : 13;
    
}bit;

int main()
{
    
    printf("\n%ld ",sizeof(bit));
}