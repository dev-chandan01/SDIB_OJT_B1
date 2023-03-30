#include<stdio.h>

int main()
{
    int length,largest,i;
    int arr[] = {5,2,3,5,9,8,4,6,6,26,5,156,51,651,61,51,654,65156,165,6,1,456,465,45,456,4564,564,654,654,654,654,564,564,654,56,456,46,4};
    length = sizeof(arr)/sizeof(int);
    largest = arr[0];

    for(i =0; i < length; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("\nThe largest element in the array is :- %d\n",largest);
    printf("\n");
}
   
