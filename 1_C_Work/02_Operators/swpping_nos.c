#include<stdio.h>

int main()
{
    int x = 10;
    int y = 12;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("The swapped value of x and y is :- %d, %d", x,y);
}