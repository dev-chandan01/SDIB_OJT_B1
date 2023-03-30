#include<stdio.h>

struct 
{
    int i;
    float ft;
}decl;

int main()
{
    

    decl.i=4;
    decl.ft=7.966623;
    printf("%d\n",decl.i);
    printf("%f\n",decl.ft);
}