#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("hello.txt","r");
    char str[15];

    if(fp == NULL)
    {
        printf("\nFile not found!!!!!");
    }
    else
    {
        printf("\nFile Created Succesfully");
    }
   // fseek(fp,2,SEEK_SET);
    while((fgets(str,2,fp)!=EOF))
    {
        puts(str);
    }
    fclose(fp);
}