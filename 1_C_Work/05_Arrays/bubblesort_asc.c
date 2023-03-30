#include<stdio.h>

int main()
{
    int n,i,j,v;
    printf("\nEnter the size of array:- ");
    scanf("%d",&n);
    int arr[n];

    for( i = 0; i<n; i++)
    {
        printf("\nEnter the %d element :- ",(i+1));
        v =0;
        scanf("%d",&v);
        arr[i] = v;
    }
    printf("\nThe entered array is :- ");
    for(i = 0; i< n; i++)
    {
        printf("%d ", arr[i]);
    }
    //Sorting

    for( i = 0; i<n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            j = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = j;
        }
    }

    printf("\nThe Sorted array is :- ");
    for(i = 0; i< n; i++)
    {
        printf("%d ", arr[i]);
    }



}