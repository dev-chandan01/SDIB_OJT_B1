#include<stdio.h>

void *malloc(size_t size);

int main()
{
    int *ptr,a;
    ptr = (int *)malloc(1*sizeof(int));
    printf("The address of ptr is :- %d",ptr);
    printf("\nEnter the valuee:");
    scanf("%d",ptr);

    printf("\nThe value is :- %d",*ptr);

}