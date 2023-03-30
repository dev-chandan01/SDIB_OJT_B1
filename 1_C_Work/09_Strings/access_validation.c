#include<stdio.h>
#include<string.h>
void valid(char str[]);
int main()
{
    char usr[10];
    printf("\nEnter the password:");
    gets(usr);
    if(usr[0] != '\0')
    {
        valid(usr);
    }
    else
    {
        printf("Please enter a valid password!!!!");

    }

}

void valid(char str[])
{
    char pwd[] = "sibu";
    int i,count=0;
    if(str == pwd)
    {
        printf("welcome!!!");
    }
    else
    {
        printf("Sorry not allowed!!!");
    }
}