#include<stdio.h>


int inc(int *);
int main()
{
    static int a=10;
    int *p;
    p=&a;
    a=inc(p);
    printf("Incremented value of a is :- %d",*p);
}
int inc(int *a)
{
    ++(*a);
    return *a;
}

