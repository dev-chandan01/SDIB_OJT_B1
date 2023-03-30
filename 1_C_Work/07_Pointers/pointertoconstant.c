#include<stdio.h>

int main()
{
    int a = 200, b =300;
    const int *p;
    p = &a;
    printf("Address of a before :- %d",p);
    ++p;
    printf("\nAddress of a After :- %d",p);
}