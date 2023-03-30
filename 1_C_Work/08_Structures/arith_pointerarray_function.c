#include<stdio.h>
struct arith
{
    int a,b,res;
    int (*fnptr[3])(int,int);

}va;

int add(int x,int y)
{
    return (x+y);
}

int sub(int x,int y)
{
    return (x-y);
}
int mul(int x,int y)
{
    return (x*y);
}

int div(int x,int y)
{
    return (x/y);
}

int main()
{
    printf("enter the vlue of a:");
    scanf("%d",&va.a);

    printf("enter the vlue of b:");
    scanf("%d",&va.b);
    
    va.fnptr[0]=add;
    va.res= (*(va.fnptr[0]))(va.a,va.b);
    printf("\nadd : %d",va.res);

    
    va.fnptr[1]=sub;
    va.res= (*(va.fnptr[1]))(va.a,va.b);
    printf("\nsub : %d",va.res);


    va.fnptr[2]=mul;
    va.res=(*(va.fnptr[2]))(va.a,va.b);
    printf("\nmul : %d",va.res);

    va.fnptr[3]=div;
    va.res= (*(va.fnptr[3]))(va.a,va.b);
    printf("\ndiv : %d",va.res);
}