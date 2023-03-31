#include<stdio.h>

void *calloc(size_t nmemb,size_t size);

int main()
{
    int *ptr,n=5,i;
    ptr = (int *)calloc(n,sizeof(int));
    printf("The address of ptr is :- %d",ptr);
    
    for(i=0;i<n;i++)
    {
    printf("\nEnter the value %d:",i+1);
    scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\nThe value of ptr is :- %d",ptr[i]);
    }
    

}