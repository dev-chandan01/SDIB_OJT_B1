#include<stdio.h>
int main()
{
    enum status{pass,fail,absent};
    enum status st1,st2,st3;
    st1=pass;
    st2=absent;
    st3=fail;
    printf("%d %d %d\n",st1,st2,st3);

}