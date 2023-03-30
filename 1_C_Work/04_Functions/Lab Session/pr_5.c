#include<stdio.h>

int main()
{
    int i =1;
    if(!i)
    {
        printf("Phytec");
    }
    else
    {
        i = 0;
        printf("C-Program");
        main();
    }
}