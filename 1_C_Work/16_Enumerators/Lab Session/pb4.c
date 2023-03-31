#include<stdio.h>
int main()
{
    enum gender{male,female=-1};
    enum gender st1,st2;
    st1=male;
    st2=female;
    printf("%d %d \n",st1,st2);

}