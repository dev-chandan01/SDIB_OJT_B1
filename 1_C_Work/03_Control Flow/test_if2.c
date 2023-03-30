#include<stdio.h>

int main()
{
    int a = 10, b= 2;
    printf("Before if statement\n a :- %d\n b :- %d\n",a,b);

    if(a>b)
    {
        int temp =a;
        a =b;
        b = temp;
        
    }
    printf("After if statement\n a :- %d\n b :- %d",a,b);
}