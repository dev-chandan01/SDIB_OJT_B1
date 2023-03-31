#include<stdio.h>

enum days
{
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int main()
{
    
   enum days eday =Mon;
   printf("\nMon = %d",eday);
    eday =Tue;
   printf("\nTue = %d",eday);
}