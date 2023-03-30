
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},*p;
    p = &arr;
    printf("Value of arr[2] is : %d", *(arr+5-3));

    
}