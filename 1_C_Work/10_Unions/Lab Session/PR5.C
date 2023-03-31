#include<stdio.h>



int main()
{
    union std
    {
    int i;
    char ch[2];
    
    }s;

    s.ch[0] =3;
    s.ch[1] =2;


    printf("%d \n%d \n%d",s.ch[0],s.ch[1],s.i);
}