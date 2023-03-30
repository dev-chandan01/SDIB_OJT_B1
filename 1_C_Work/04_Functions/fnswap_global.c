#include<stdio.h>


int a =10, b= 5;
void swap();
int main()
{
    printf("\nBefore swap value of a = %d and b = %d",a,b);
    swap(a,b);
    

}

void swap()
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nSwapped value of a = %d and b = %d",a,b);
    
}