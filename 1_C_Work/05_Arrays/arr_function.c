#include<stdio.h>

void arr_disp(int arr[], int);

int main()
{
    int n,i,sum =0,v;
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
    arr_disp(arr,n);
}

void arr_disp(int arr[], int n)
{
    int i;
    printf("The array print using function:-");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}