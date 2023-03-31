#include<stdio.h>
enum led{off,on};
int main()
{
    int n;
    printf("enter the led state:\n");
    scanf("%d",&n);
    switch(n)
    {
        case on:printf("led on");break;
        case off:printf("led off");break;
        default:exit(0);
    }
}