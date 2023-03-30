#include<stdio.h>

int main()
{
        fun();
        fun();
}

int fun()
{
    static int num =2;
    printf("%d ",num);
    num++;
    return 0;
}


