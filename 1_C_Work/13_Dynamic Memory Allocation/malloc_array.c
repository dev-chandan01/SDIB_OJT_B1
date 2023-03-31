#include<stdio.h>

void *malloc(size_t size);

int main()
{
    int *ptr,n,i;
    printf("Enter the no of elements:- ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("The address of ptr is :- %d",ptr);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value %d:",i+1);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\nThe value %d is :- %d",i+1,ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\nThe address of %d value is %d",i+1,&ptr[i]);
    }

}