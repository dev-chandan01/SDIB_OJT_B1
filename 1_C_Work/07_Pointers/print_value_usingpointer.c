#include<stdio.h>
int main()
{
    float *p;
    float f = 10.45;
    p=&f;
    printf("%.2f",*p);
}