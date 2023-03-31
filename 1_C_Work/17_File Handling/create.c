#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("hello.txt","r");

    if(fp == NULL)
    {
        printf("\nFile not found!!!!!");
    }
    else
    {
        printf("\nFile Created Succesfully");
    }
    fclose(fp);
}