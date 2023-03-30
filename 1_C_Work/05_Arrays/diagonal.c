#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("\nEnter the no of rows of array:- ");
    scanf("%d",&r);
    printf("\nEnter the no of columns of array:- ");
    scanf("%d",&c);
    int add[r][c];

    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[3][3] = {1,1,1,1,1,1,1,1,1};

    for(i =0; i< r; i++)
    {
        for(j =0; j< c; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }

    }

    for(i =0; i< r; i++)
    {
        for(j =0; j< c; j++)
        {
            if(i==j)
            printf("%d ",add[i][j]);
        }
        printf("\n");

    }

}