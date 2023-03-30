#include<stdio.h>
void rec_print(int);
int main()
{
    int n =0;
    rec_print(n);
}

void rec_print(int n)
{
    
    if(n <= 10 )
    {
        rec_print(n+1);
    }
    else
    {
        return ;
    }
    printf("%d\n", n);
}