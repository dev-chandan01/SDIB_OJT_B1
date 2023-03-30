#include<stdio.h>
int i;
int fun1(int);
int fun2(int);

int main()
{
    extern  int j;
    int i = 3,x;
    x = fun1(i);
    printf("%d,",x);
    fun2(i);
    printf("%d",i);

}

int fun1(int j)
{
    printf("%d,",++j);
    return j;
}

int fun2(int i)
{
    printf("%d,",++i);
    return 0;
}
