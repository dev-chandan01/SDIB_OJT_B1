#include<stdio.h>

struct std
{
    int a : 1;
    int b : 4;
    int c : 4;
}s;

int main()
{
    
    printf("\n%d ",sizeof(s));
}