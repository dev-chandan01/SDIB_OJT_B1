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

    for(i = 0; i< n; i++)
    {
        printf("%d ", arr[i]);
    }
}