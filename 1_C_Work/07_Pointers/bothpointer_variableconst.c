#include <stdio.h>  
int main()  
{  
    int a = 10;
    int const *const ptr;  
      
    ptr=&a;   
    //a++;
    ++*ptr;
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}  