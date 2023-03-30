#include<stdio.h>

void swap(int,int);
int a =10, b= 5;
int main()
{
    
    swap(a,b);
    printf("\nSwapped value of a = %d and b = %d",a,b);

}

void swap(int a, int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swapped value of a = %d and b = %d",a,b);
    
}