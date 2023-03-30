#include<stdio.h>

int main()
{
    int n,i,sum =0,v,pos;
    printf("\nEnter the size of array:- ");
    scanf("%d",&n);
    int arr[50];

    for( i = 0; i<n; i++)
    {
        printf("\nEnter the %d element :- ",(i+1));
        v =0;
        scanf("%d",&v);
        arr[i] = v;
    }

    printf("\nEnter the element position to be inserted:- ");
    scanf("%d", &pos);
    
    printf("\nEnter the element to be inserted:- ");
    scanf("%d", &v);


    for( i = n-1; i>=pos-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos -1] = v;

    printf("\nThe updated array is :- ");
    for( i = 0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }

}