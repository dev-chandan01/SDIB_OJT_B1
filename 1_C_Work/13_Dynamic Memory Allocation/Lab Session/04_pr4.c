#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p ;
    p = (int*)malloc(4*sizeof(int));
    printf("%d\n",sizeof(p));
    free(p);
    
}