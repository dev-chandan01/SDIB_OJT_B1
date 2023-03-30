#include<stdio.h>

int main()
{
    int i = 0;
    i++;
    if(i <= 5)
    {
        printf("welcome");
        exit(1);
        main();
    }
}