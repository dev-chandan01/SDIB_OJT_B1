#include<stdio.h>

void *malloc(size_t size);
void *realloc(void *ptr,size_t new_size);

int main()
{
    int *ptr,n,i,*temp;
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

    

    temp = realloc(ptr,(n*sizeof(int))+10);
    printf("\nThe new address is:- %d",temp);

    ptr = temp;
    n = n+10;

    for(i=n;i<n+10;i++)
    {
        printf("\nEnter the value %d:",i+1);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n+10;i++)
    {
        printf("\nThe value %d is :- %d",i+1,ptr[i]);
    }

    

}