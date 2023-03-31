#include<stdio.h>

void disp(char *);
#define STRING(s) disp(s);
int main()
{
    STRING("ABC");
    STRING("HELLO");
}
void disp(char *p)
{
    printf("\n %s \n",p);
}