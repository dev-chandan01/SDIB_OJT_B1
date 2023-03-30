#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="The cocaine man";
    char ch;
    int i =0;
    ch = s[++i];
    printf("%c",ch);
    
    ch = s[i++];
    printf("%c",ch);
    
    ch = ++i[s];
    printf("%c",ch);

    ch = ++i[s];
    printf("%c",ch);
}