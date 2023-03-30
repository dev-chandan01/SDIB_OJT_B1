#include<stdio.h>

int (*fnptr) (int, int);

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

    char choice;
    printf("Enter the operation to be performed(symbol):- ");
    scanf("%c",&choice);
    int X;

    switch(choice)
    {
        case '+':
            fnptr = add;
            X = (*fnptr) (10,20);
            printf("\nThe sum of 10 and 20 is :- %d", X);
            break;

        case '-':
            fnptr = sub;
            X = (*fnptr) (20,10);
            printf("\nThe difference of 20 and 10 is :- %d", X);
            break;
        
        case '*':
            fnptr = mul;
            X = (*fnptr) (10,20);
            printf("\nThe multiplication of 10 and 20 is :- %d", X);
            break;
        case '/':
            fnptr = div;
            X = (*fnptr) (20,10);
            printf("\nThe division of 20 and 10 is :- %d", X);
            break;
    }

    
}

