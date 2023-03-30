#include<stdio.h>
#include"arith.h"
extern int result;

int main()
{
    printf("\n%d",result);
    add(10,20);
    printf("\n%d",result);
    sub(20,30);
    printf("\n%d",result);
    disp();

}