#include<stdio.h>

struct std
{
    int a : 1;
    int b : 4;
    int c : 4;
}s = {1,2,13};

int main()
{
    
    printf("\n%d %d %d",s.a,s.b,s.c);
}