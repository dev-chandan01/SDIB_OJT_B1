#include<stdio.h>

void main()

{

    int a=5,b=4;

    a=a^b;
    b=b^a;
    a=a^b;
    printf(" a=%d , b=%d", a, b);

}