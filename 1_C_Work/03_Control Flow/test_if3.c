#include<stdio.h>

int main()
{
    int a = 10, b= 2, temp;
    printf("Before if statement\n a :- %d\n b :- %d\n",a,b);

    if(a>b)
    {
        
        a += 1;
        b += 1; 
        
    }
    else
    {
        
        a += 10;
        b += 20; 
        
    }
    printf("After if statement\n a :- %d\n b :- %d",a,b);
}