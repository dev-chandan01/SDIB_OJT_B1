#include<stdio.h>
#define BIG(x,y) (x>y)?x:y

int main()
{
    int a,b,c;
    printf("\nEnter any 3 integer :");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n biggest of 3 number : %d\n",BIG(BIG(a,b),c));

}