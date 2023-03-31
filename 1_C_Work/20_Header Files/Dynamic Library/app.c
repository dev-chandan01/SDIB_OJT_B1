#include<stdio.h>
#include"handheld.h"


int main()
{
    int n;
    printf("Welcome to Hand Held System!!\n");
    top:
    printf("\n1.Lcd\n2.Gps\n3.Printer\n4.Activate all\n");
    printf("\nEnter your choice:");
    scanf("%d",&n);

    switch(n)
    {
        
        case 1:
            lcd();
            goto top;
        
        case 2:
            gps();
            goto top;
        case 3:
            printer();
            goto top;
        case 4:
            printf("\nAll the modules are activated!!\n");
            lcd();
            gps();
            printer();
            goto top;
        default:
            printf("\nInvalid System choice!!! Enter your choice again");
    }
    
}