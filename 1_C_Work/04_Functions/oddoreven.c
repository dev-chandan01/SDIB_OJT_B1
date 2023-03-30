#include<stdio.h>

int odd(int);

int main()
{
    int n,res;
    printf("Enter the number :- ");
    scanf("%d",&n);
    odd(n);
}

int odd(int n)
{
    if(n %2 == 0)
    printf("Even");
    else
    printf("Odd\n");
}