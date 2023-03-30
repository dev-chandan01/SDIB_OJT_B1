#include<stdio.h>

int main()
{
    int n,i,sum =0,v;
    printf("\nEnter the size of array:- ");
    scanf("%d",&n);
    int arr1[n],arr2[n];

    for( i = 0; i<n; i++)
    {
        printf("\nEnter the %d element :- ",(i+1));
        v =0;
        scanf("%d",&v);
        arr1[i] = v;
    }

    for( i = 0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("\nThe entered array 1 is :- ");

    for(i = 0; i< n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe Copied array 2 is :- ");

    for(i = 0; i< n; i++)
    {
        printf("%d ", arr2[i]);
    }

}