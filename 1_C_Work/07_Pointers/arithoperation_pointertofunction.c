#include<stdio.h>

int (*fnptr) (int, int);

void operation(char, int ,int, int (*fnptr)(int,int));

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
    int a = 10, b =20;
    char ch;
    printf("Enter the operation to be performed(symbol):- ");
    scanf("%c",&ch);

    switch(ch)
    {
        case '+':
            operation(ch, a,b, add);
            break;

        case '-':
            operation(ch, a,b, sub);
            break;
        
        case '*':
            operation(ch, a,b, mul);
            break;
        case '/':
            operation(ch, a,b, div);
            break;
    }
}

void operation(char ch, int a, int b, int(*fnptr)(int x, int y))
{
    int result;
    result = (*fnptr) (a,b);
    printf("The sum of %d %c %d is :- %d\n",a,ch,b,result);
}