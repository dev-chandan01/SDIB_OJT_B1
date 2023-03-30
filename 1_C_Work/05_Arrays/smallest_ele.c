#include<stdio.h>

int main()
{
    int length,smallest,i;
    int arr[] = {5,2,3,5,9,8,4,6,6,26,5,156,51,651,61,51,654,65156,165,6,1,456,465,45,456,4564,564,654,654,654,654,564,564,654,56,456,46,4};
    length = sizeof(arr)/sizeof(int);
    smallest = arr[0];

    for(i =0; i < length; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("\nThe smallest element in the array is :- %d\n",smallest);
    printf("\n");
}
   
