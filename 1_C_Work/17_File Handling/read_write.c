#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[60],ch;
    FILE *fp;
    printf("Enter the file name : ");
    scanf("%[^\n]",&name);
    fp = fopen(name,"w+");
    printf("Value of fp is: %d",fp);
    if(fp == NULL)
    {
        printf("\nFile not found!!!!!");
        exit(1);
    }
    printf("\nFile created\n");
    printf("\n Enter data to file and press \"clte+d\" to end\n");
    while((ch = getchar())!= EOF)
    {
        fputc(ch,fp);
    }
    fseek(fp,0,SEEK_SET);

    printf("\nData in %s file\n",name);
    while((ch = fgetc(fp))!= EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}