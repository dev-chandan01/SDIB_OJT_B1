#include<stdio.h>

int main()
{
    int a = 2, b = 5,x,i;
    
    for(i = 7; i >= 0; i--)
    {
        x = (a>>i) & 0x1;
        printf("%d",x);
    }
    printf("\n");
    for(i = 7; i >= 0; i--)
    {
        x = (b>>i) & 0x1;
        printf("%d",x);
    }
    printf("\n");
    for(i = 7; i >= 0; i--)
    {
        x = (a>>i) & (b>>i);
        printf("%d",x);
    }

    
    
    
}