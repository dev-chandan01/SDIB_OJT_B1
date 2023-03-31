#include<stdio.h>

union std
{
    int age;
    int id;
    char name[10];
}s;

int main()
{
    printf("\nThe size of union is: %d",sizeof(s));
}