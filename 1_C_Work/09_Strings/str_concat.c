#include<stdio.h>
#include<string.h>

int main()
{
    char address[50]="Silicon Institute of Technology\0";
    char str1[50]="Silicon Institute of Technology Bhubaneswar\0";
    char s[100] = strcat(address,str1);
    printf("The merged string is : %s",s);
    printf("\nThe merged string is:%s",strcat(address,str1));
    
    return 0;
}