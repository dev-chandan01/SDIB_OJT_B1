#include<stdio.h>
int main(int argc,int *argv[])
{
    int i,sum=0,n;
    for(i=1;i<argc;i++) 
    {
       sscanf(argv[i],"%d",&n);
       sum=sum + n;
    }
    printf("\n%d",sum);
   
}