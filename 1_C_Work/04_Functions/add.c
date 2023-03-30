#include<stdio.h>
#include<stdlib.h>

void add(int,int);

int main()
{
    int a=10,b= 20,c=0;
    add(a,b);
    printf("The sum of %d and %d is :- %d",a,b,c);

}

void add(int a,int b)
{
    int c = a+b;
    return c;
}