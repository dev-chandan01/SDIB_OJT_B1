#include<stdio.h>

void dectobin(int);

int main()
{
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    dectobin(n);
}

void dectobin(int n)
{
    int i,x;
    printf("Converting......\n");
    printf("The decimal to binary converted is :-\n");
    
    for(i = 7; i >= 0; i--)
    {
        x = (n>>i) & 0x1;
        printf("%d",x);
    }
}