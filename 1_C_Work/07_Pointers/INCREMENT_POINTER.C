#include<stdio.h>

int main()
{
    int a = 10, *ptr=NULL;
    ptr = &a;

    printf("\nBefore incremented :- ");
    printf("\nIncremented address :- %d", ++ptr);
    printf("\nIncremented value :- %d", *(ptr++));
}