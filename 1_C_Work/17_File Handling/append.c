#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[60],ch;
    FILE *fp;
    printf("Enter the file name : ");
    scanf("%[^\n]",&name);
    fp = fopen(name,"a");
    printf("Value of fp is: %d",fp);
    if(fp == NULL)
    {
        printf("\nFile not found!!!!!");
        exit(1);
    }
    printf("\nFile created\n");
    printf("\n Enter data to file and press \"clte+d\" to end\n");
    while((ch = getchar())!= EOF)
        putc(ch,fp);
    
    fclose(fp);
}