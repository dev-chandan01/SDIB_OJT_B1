
#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},*p;
    p = arr;
    printf("\nValue of arr[5] is : %d", *(arr+5));
    printf("\nValue of arr[2] is : %d", *(arr+2));
    printf("\nValue of arr[5] - arr[2] is :- %d", (*(arr+5)-*(arr+2)));
}