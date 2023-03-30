#include<stdio.h>
int a;
int main()
{
    static int b;
    int c;
    register int d;
    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);

}