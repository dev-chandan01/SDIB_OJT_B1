#include<stdio.h>

int main()
{
    int n  = 10,i,v;
    int arr[n];

    for( i = 0; i<n; i++)
    {
        printf("\nEnter the Student %d Id :- ",(i+1));
        v =0;
        scanf("%d",&v);
        arr[i] = v;
    }

    printf("\nThe Student Id's :- ");
    for(i = 0; i< n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe Student Id's :- ");
    for(i = 0; i< n; i++)
    {
        printf("%d ",i[arr]);
    }
}