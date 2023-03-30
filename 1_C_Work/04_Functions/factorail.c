#include<stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter then number :- ");
    scanf("%d",&n);
    printf("%d\n",fact(n));
}

int fact(int n)
{
    if(n>0)
    {
        return n * fact(n-1);
    }
    else
    {
        return 1;
    }
}