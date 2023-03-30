#include<stdio.h>

int main()
{
    int a =10, b = 11;
    int *p = &a;
    p = &b;
    *p = 15;
    printf("%p\n" ,&b);
    printf("%d\n",b);
    printf("%d\n%p\n",*p,p);
    
}