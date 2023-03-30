#include<stdio.h>

void perf(int);


int main()
{
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    perf(n);
}



void perf(int n)
{
    int sum,i,j;
    for(j = 1; j < n ; j++)
    {
        i = 1;
        sum =0;
        while(i < j)
        {
            if(j%i == 0)
            {
                sum += i;
            }
            i++;
        }

        if(sum == j)
        {
            printf("%d,",j);
        }
    } 

}