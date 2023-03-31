#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int i=0;
    i+=strlen(argv[1]);
    while(i>0)
    {
        printf("%c",argv[1][--i]);
    }
}
