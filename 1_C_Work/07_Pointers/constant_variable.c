#include <stdio.h>  
int main()  
{  
    const int a=1;  
    int *ptr;  
    ptr=&a;   
    //a++;
    ++*ptr;
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}  