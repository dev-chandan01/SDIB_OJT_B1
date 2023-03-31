#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[60],ch;
    FILE *fp;
    printf("Enter the file name : ");
    scanf("%[^\n]",&name);
    fp = fopen(name,"r");
    printf("Value of fp is: %d",fp);
    if(fp == NULL)
    {
        printf("\nFile not found!!!!!");
        exit(1);
    }
    //getchar();
    printf("\nData in %s file\n",name);
    while((ch = getc(fp))!= EOF)
        putchar(ch);
    fclose(fp);
}