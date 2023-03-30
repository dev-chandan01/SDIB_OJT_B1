#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="Hello!";
    printf("%d",*(ch+strlen(ch)));
}