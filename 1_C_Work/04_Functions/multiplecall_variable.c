#include<stdio.h>

int inc();

int main()
{
    inc();
    inc();
    inc();
}

int inc()
{
    int count =0;
    count++;
    printf("%d\n",count);

}