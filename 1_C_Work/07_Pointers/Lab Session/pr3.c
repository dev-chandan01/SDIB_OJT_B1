#include<stdio.h>

int main()
{
    int a =10, b = 9;
    int *p,*q;
    int c;
    p = &a;
    q =&b;
    c = *q;
    *p = 20;
    printf("%d  %p  %d\n" ,a,p,*p);
    printf("%p %p %d\n",&q,q,*(&c));
    
}