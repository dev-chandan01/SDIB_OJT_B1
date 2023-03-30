#include<stdio.h>
#include<string.h>
int main()
{
    static char s1[]="dills";
    static char s2[20];
    static char s3[]="Daffo";
    int i;
    i = strcmp(strcat(s3,strcpy(s2,s1)),"Daffodills");
    printf("%d",i);

}