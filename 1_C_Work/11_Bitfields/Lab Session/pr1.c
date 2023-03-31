#include<stdio.h>

struct std
{
    int a : 2;
    int b : 4;
    int c : 4;
    int d : 3;
}s = {2,3,8,7};

int main()
{
    
    printf("\n%d %d %d %d ",s.a,s.b,s.c,s.d);
}