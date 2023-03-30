#include<stdio.h>

int main()
{
    int num = _a_123(4);
    printf("%d\n",--num);
    return 0;
}

int _a_123(int num)
{
    return(num++);
}