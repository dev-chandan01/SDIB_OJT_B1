#include<stdio.h>

# pragma pack(1)
struct adhar
{
    char name;
    int no;
    int age;
    float salary;
};

int main()
{
    struct adhar ad;
    printf("The size of variable employee is %d",sizeof(ad));
}