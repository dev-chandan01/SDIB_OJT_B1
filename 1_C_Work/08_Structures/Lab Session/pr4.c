#include<stdio.h>


struct c
{
    int z;
    double y;
    short int x;
};

int main()
{
    printf("The size of variable employee is %d",sizeof(struct c));
}