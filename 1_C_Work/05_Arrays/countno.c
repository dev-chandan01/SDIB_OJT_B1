#include<stdio.h>

int main()
{
    int n,i,j,count =0;
    printf("\nEnter the no:- ");
    scanf("%d",&n);
    int arr[3][3] = {1,2,1,1,3,1,5,1,7};

    for(i =0; i< 3; i++)
    {
        for(j =0; j< 3; j++)
        {
            if(arr[i][j] == n)
            count++;
        }

    }

    printf("\nThe no %d is repeated %d times.",n,count);

}