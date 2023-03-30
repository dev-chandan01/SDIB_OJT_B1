#include<stdio.h>

void arm(int);
void perf(int);

int main()
{
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    arm(n);
    perf(n);
}

void arm(int n)
{
    int sum=0,digit,temp = n;

    while(n > 0)
    {
        digit  = n % 10;
        sum += (digit*digit*digit);
        n = n/10;
    }

    if(sum == temp)
    {
        printf("\n%d is a Armstrong No.",temp);
    }
    else
    {
        printf("\n%d is not a Armstrong No.",temp);
    }

}

void perf(int n)
{
    int sum=0,i = 1;

    while(i < n)
    {
        if(n%i == 0)
        {
        sum += i;
        }
        i++;
    }

    if(sum == n)
    {
        printf("\n%d is a Perfect No.",n);
    }
    else
    {
        printf("\n%d is not a Perfect No.",n);
    }

}