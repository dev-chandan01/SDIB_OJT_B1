#include<stdio.h>
extern int result;
void disp();
int add(int,int);
int sub(int,int);
int main()
{
    printf("%d",result);
    add(10,20);
    printf("%d",result);
    sub(20,30);
    printf("%d",result);
    disp();

}