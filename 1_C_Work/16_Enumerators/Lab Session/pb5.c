#include<stdio.h>
int main()
{
    enum gender{a,b=99,c,d=-1};

    printf("%d %d %d %d\n",a,b,c,d);

}