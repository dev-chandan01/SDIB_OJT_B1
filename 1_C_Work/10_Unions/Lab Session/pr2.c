#include<stdio.h>



int main()
{
    union std
    {
    float id;
    int age;
    
    }s;

    s.id =12.3;
    s.age=100;


    printf("%.2f \n%d",s.id,s.age);
}