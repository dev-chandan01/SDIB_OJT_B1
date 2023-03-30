#include<stdio.h>

int main()
{
    int cho, a,b;
    top:
    printf("\n1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("\nEnter Your choice\n");
    scanf("%d",&cho);
    printf("Enter number a :- ");
    scanf("%d",&a);
    printf("Enter number b :- ");
    scanf("%d",&b);

    switch (cho)
    {
    case 1:
        printf("The result of a + b is :- %d\n",a+b);
        break;
    case 2:
        printf("The result of a - b is :- %d\n",a-b);
        break;
    case 3:
        printf("The result of a * b is :- %d\n",a*b);
        break;
    case 4:
        printf("The result of a / b is :- %d\n",a/b);
        break;
    default:
        printf("Invalid Input :: Enter a valid choice\n");
        goto top;
        break;
    }
}