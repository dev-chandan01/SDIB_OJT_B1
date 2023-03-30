#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char address[50]="Silicon Institute of Technology\0";
    char str1[50]="Silicon Institute of Technology Bhubaneswar\0";
    a = strcmp(address,str1);
    printf("The difference of string is:%d",a);
    
    return 0;
}