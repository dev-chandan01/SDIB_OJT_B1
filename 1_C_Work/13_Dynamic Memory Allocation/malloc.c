#include<stdio.h>

void *malloc(size_t size);

int main()
{
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    printf("The address of ptr is :- %d",ptr);

}