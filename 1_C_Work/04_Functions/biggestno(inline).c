#include<stdio.h>

inline int biggest(int,int);

int main()
{
    int a,b,c;
    printf("Enter the value of a :-");
    scanf("%d",&a);
    printf("Enter the value of a :-");
    scanf("%d",&a);

    c = biggest(a,b);
    printf("The biggest value is :- %d",c);
    
}

inline int biggest(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}