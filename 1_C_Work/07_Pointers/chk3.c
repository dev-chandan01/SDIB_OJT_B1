
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},*p;
    p = &arr;
    printf("\nAddress of arr[3] is : %d", (arr+5));
    printf("\nAddress of arr[3] is : %d", (arr+2));
    printf("\nNo of elements in between is : %d", ((arr+5)-(arr+2)));
    
    

    
}