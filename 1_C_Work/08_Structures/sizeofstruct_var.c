#include<stdio.h>


struct Employee
{
    char name;
    int id;
    float salary;
    double d;
    unsigned int a;
}emp;

int main()
{
    printf("The size of variable employee is %d",sizeof(emp));
}