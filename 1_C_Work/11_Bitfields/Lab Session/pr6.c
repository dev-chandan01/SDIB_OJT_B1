#include<stdio.h>

struct std
{
    int a : 1;
};

int main()
{
    struct std s ={1};
    printf("\n%d ",s.a);
}