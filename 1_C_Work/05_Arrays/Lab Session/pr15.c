#include<stdio.h>

int main()
{
    int i;

    int a[15] = {1,2,5,[14] = 13,[5] = 5,[3]=4};
    for(i = 0; i<15;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[i]);
}