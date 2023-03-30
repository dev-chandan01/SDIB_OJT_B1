#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,5,6,7,8,9};
    int missing=0,i, n =sizeof(arr)/sizeof(n);

    for(i = 0; i<n;i++)
    {
        if(arr[i]+1 == arr[i+1])
        {
            continue;
        }
        else
        {
            missing = arr[i]+1;
            break;
        }
    }

    printf("The missing element in the array is :- %d",missing);


}