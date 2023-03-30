#include<stdio.h>
int i;
int fun1(int);
int fun2(int);

int main()
{
    extern  int j;
    int i = 3;
    fun1(i);
    printf("%d,",i);
    fun2(i);
    printf("%d",i);

}

int fun1(int j)
{
    printf("%d,",++j);
}

int fun2(int i)
{
    printf("%d,",++i);
}
int j =1;