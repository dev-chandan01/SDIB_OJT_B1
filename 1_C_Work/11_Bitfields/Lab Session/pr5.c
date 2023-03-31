#include<stdio.h>
struct std
{
    int a : 16;
    int b : 10;
    int c : 6;
    int d : 1;
}s;

int main()
{
    
    printf("\n%d ",sizeof(s));
}