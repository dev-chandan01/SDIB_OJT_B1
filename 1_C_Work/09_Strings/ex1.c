#include<stdio.h>
void display(char name[]);
int main()
{
    char name[30],ch;
    printf("Enter name: ");
    gets(name);
    display(name);//Passing string to a function
}

void display(char name[])
{
    printf("The entered name is :");
    puts(name);
}

