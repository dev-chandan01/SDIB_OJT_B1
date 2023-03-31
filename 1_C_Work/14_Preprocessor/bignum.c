#include<stdio.h>
#define BIG(x,y) (x>y)?x:y

int main()
{
    int a,b,re;
    char y='F',z='S';
    printf("\n Enter any 2 integer:");
    scanf("%d%d",&a,&b);
    printf("\n biggest of two num: %d\n",BIG(a,b));
    printf("\n biggest of two char: %c\n",BIG(y,z));
    printf("\n biggest of two float: %f\n",BIG(10.23,24.45));

}