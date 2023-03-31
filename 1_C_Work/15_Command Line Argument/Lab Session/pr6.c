#include<stdio.h>

void fun(int);

int main(int argc)
{
    printf("%d",argc);
    fun(argc);
    return 0;
}
void fun(int i)
{
    if(i!=4)
    {
        main(++i);
    }

}