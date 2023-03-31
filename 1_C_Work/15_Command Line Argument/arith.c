#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int a,b,res;
    char op;
    sscanf(argv[1],"%d",&a);
    sscanf(argv[2],"%d",&b);
    sscanf(argv[3],"%c",&op);

    /*switch(res)
    {
        case '+':
            k=i+j;
            printf("\nThe sum of 2num is: %d",k);
            break;

        case '-':
            k=i-j;
            printf("\nThe sub of 2num is: %d",k);
            break;
        
        case '*':
            k=i*j;
            printf("\nThe mul of 2num is: %d",k);
            break;

        case '/':
            k=i/j;
            printf("\nThe div of 2num is: %d",k);
            break;
    }*/

    if(strcmp(argv[3],"+")==0)
    {
        res = a+b;
        printf("The sum of %d and %d is %d",a,b,res);
        
    }
    else if(strcmp(argv[3],"-")==0)
    {
        res = a-b;
        printf("The difference of %d and %d is %d",a,b,res);
        
    }
    else if(strcmp(argv[3],"/")==0)
    {
        res = a/b;
        printf("The division of %d and %d is %d",a,b,res);
        
    }
    else if(strcmp(argv[3],"M")==0)
    {
        res = a*b;
        printf("The product of %d and %d is %d",a,b,res);

    }
}