#include<stdio.h>

enum days
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
}day;

int main()
{
    int i;
    
    for(i = Sunday;i<=Saturday;i++)
    {
        printf("\n%d",i);
    }
}