
#include<stdio.h>
int main()
{
    int *p;
    *p = 100;

    printf("\nValue is : %d", *(p));
    printf("\nAddress is : %d", (p));
    
    
}