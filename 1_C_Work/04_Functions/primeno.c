#include<stdio.h>

void prime(int);

int main()
{
    int n,res;
    printf("Enter the number :- ");
    scanf("%d",&n);
    prime(n);
}

void prime(int n)
{
    int i = 1,count =0;
    
    while(i <= n)
    {
        if(n % i == 0)
            count++;
        i++;
    }
    
    if(count > 2)
    {
        printf("Not a prime no\n");
    }
    else
    {
        printf("A prime no\n");
    }

}
