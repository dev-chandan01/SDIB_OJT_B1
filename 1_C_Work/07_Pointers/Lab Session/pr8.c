#include<stdio.h>

char * myfunc(char *ptr)
{
    ptr += 3;
    return ptr;
}

int main()
{
    char *x,*y;
    x = "PHYTEC";
    y = myfunc(x);
    printf("%s",y);

}