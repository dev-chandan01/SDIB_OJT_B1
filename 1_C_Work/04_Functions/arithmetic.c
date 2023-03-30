#include<stdio.h>

int add(int,int);
void sub();
int mul();
void div(int ,int);

int main()
{
    int a,b,c;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    c = add(a,b);
    printf("The sum of %d and %d is :- %d\n",a,b,c);
    sub();
    c = mul();
    printf("The multiplication is :- %d\n",c);
    div(a,b);


}

int add(a,b)
{
    int c = a+b;
    return c;
}

void sub()
{
    int a,b;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    int c = a-b;
    printf("The subtraction is :- %d\n",c);
}

int mul()
{
    int a,b;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    int c = a*b;
    return c;
}

void div(a,b)
{
    int c = a/b;
    printf("The Division of %d and %d is :- %d\n",a,b,c);
}