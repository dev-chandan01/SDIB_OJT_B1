#include<stdio.h>

int main()
{
    int n = 10,i,x;
    for(i = 7; i >= 0; i--)
    {
        x = (n>>i) & 0x1;
        printf("%d",x);
    }
    
}