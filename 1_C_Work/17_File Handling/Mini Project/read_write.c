#include<stdio.h>
#include"studata.h"

int main()
{
    int n;
    top:
    printf("\n1.Store Student Data\n2.View Student Data\n3.Terminate\n");
    printf("\nEnter your choice:");
    scanf("%d",&n);

    switch(n)
    {
        case 1: 
            write();
            goto top;
        case 2:
            read();
            goto top;
        case 3:
            break;
        default:
            printf("Invalid Option!!!  Enter a valid choice");
            goto top;
    }
}