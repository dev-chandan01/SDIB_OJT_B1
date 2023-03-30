#include<stdio.h>
#include<string.h>

int main()
{
   struct xyz{
    char * n;
    int year;
   };

   struct xyz x = {"Phytec",2022};
   struct xyz y = x;
   printf("%d\n",printf("%s",y.n)); 
}