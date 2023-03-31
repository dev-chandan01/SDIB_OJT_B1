#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("\n");
    printf("%s\n",argv[0]);//0th index of argv stores the file name
    printf("\n%d",argc);//prints the numb of ele passed
    for(i=1;i<argc;i++) 
    printf("\n%s",argv[i]);
}