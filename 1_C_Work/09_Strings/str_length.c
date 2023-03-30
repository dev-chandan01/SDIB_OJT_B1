#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char address[50]="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0";
    a = strlen(address);
    printf("The length of string is:%d",a);
    
    return 0;
}