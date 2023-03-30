#include<stdio.h>

int main()
{
    int num = returns(sizeof(float));
    printf("%d\n",++num);
    return 0;
}

int returns(int returns)
{
    returns += 5.01;
    return(returns);
}