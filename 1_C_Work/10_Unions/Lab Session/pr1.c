#include<stdio.h>

union std
{
    char name[32];
    float id;
    int age;
    
}s;

struct std1
{
    char name[32];
    float id;
    int age;
    
}s1;

int main()
{
    printf("\nThe size of union is: %d",sizeof(s));
    printf("\nThe size of structure is: %d",sizeof(s1));
}