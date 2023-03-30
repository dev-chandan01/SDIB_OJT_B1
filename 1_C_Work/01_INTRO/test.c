#include<stdio.h>

int main()
{
    int a = 10, b =6, c, d;
    c = (a>b) && a++;
    printf("%d\n",c);
    printf("%d\n",a);
    d = (a > b ) || a++;
    printf("%d\n",d);
    printf("%d\n",a);
        
}