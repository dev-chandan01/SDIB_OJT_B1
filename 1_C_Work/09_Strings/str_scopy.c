#include<stdio.h>
#include<string.h>

int main()
{
    char address[50]="Silicon Institute of Technology\0";
    char str1[50];
    strcpy(str1,address);
    printf("The copy of string is:-");
    puts(str1);
    return 0;
}