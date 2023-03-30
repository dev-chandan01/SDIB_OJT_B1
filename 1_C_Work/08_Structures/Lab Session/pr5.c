#include<stdio.h>


struct c
{
    double y;
    int z;
    short int x;
};

int main()
{
    printf("The size of variable employee is %d",sizeof(struct c));
}