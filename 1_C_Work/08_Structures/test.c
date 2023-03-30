#include<stdio.h>

int main()
{
    struct abc
    {
        double a;
    };

    printf("%d",sizeof(struct abc));
}