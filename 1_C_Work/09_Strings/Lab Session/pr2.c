#include<stdio.h>

int main()
{
    char ar[]= "%d\n";
    ar[1]='c';
    printf(ar,65);
}