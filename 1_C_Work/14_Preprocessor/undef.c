#include<stdio.h>
#define MAX 10

int main()
{
    printf("MAX=%d\n",MAX);
    #undef MAX
    #define MAX 100
    printf("MAX=%d\n",MAX);
}
