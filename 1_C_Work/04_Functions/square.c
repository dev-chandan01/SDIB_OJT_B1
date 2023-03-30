#include<stdio.h>
int sqr(int);

int main()
{
    int n,res;
    printf("Enter the number :- ");
    scanf("%d",&n);
    res = sqr(n);
    printf("The square of %d is :- %d",n,res);
}

int sqr(int n)
{
    return(n*n);
}