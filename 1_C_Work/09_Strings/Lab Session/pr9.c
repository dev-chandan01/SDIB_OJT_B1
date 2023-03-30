#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="Hello";
    ch[strlen(ch)+1]="#";
    printf("%s",ch);
}