#include<stdio.h>
struct arith
{
    int a,b,res;
    int (*fnptr) (int, int);

}v;


int add(int a, int b)
{
    return(a+b);
}

int sub(int a, int b)
{
    return(a-b);
}

int mul(int a, int b)
{
    return(a*b);
}

int div(int a, int b)
{
    return(a/b);
}

int main()
{
    printf("Enter the value of a:- ");
    scanf("%d",&v.a);
    printf("\nEnter the value of b:- ");
    scanf("%d",&v.b);

    v.fnptr = add;
    v.res = (*(v.fnptr)) (v.a,v.b);
    printf("\nThe sum of %d and %d is :- %d",v.a,v.b,v.res );

    v.fnptr=sub;
    v.res = (*(v.fnptr)) (v.a,v.b);
    printf("\nThe difference of %d and %d is :- %d",v.a,v.b, v.res);

    v.fnptr=mul;
    v.res =(*(v.fnptr)) (v.a,v.b);
    printf("\nThe multiplication of %d and %d is :- %d",v.a,v.b, v.res);

    v.fnptr=div;
    v.res =(*(v.fnptr)) (v.a,v.b);
    printf("\nThe division of %d and %d is :- %d",v.a,v.b, v.res);
}

