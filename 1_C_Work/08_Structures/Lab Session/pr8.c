#include<stdio.h>
int main()
{

    struct xyz
    {
        int a;
    };
    struct xyz obj1={1};
    struct xyz obj2 = obj1;
    printf("%d",obj2.a);
    obj2.a =100;
    printf("%d\n",obj1.a);
    printf("%d\n",obj2.a);
}