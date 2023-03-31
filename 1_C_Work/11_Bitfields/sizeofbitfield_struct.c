#include<stdio.h>
# pragma pack(1)
struct std
{
    unsigned int a : 4;
    char ch: 1;
}s = {10,'A'};

int main()
{
    
    printf("\nThe size of union is: %d",&s);
}