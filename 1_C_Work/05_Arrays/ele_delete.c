#include<stdio.h>

int main()
{
    int n,i,sum =0,v,pos;
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

    printf("\nEnter the element position to be deleted:- ");
    scanf("%d", &pos);

    for( i = pos -1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("\nThe updated array is :- ");
    for( i = 0; i<n-1; i++)
    {
        printf("%d ", arr[i]);
    }

}