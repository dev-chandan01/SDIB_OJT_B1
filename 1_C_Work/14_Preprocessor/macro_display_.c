#include<stdio.h>


void disp();

int main()
{
    int a=10,b=10;
    printf("\n File in Use :%s",__FILE__);
    printf("\n Present Line :%d",__LINE__);
    printf("\n Present Function :%s",__func__);
    disp();
    printf("\n Present Date: %s",__DATE__);
    printf("\n standard C : %d",__STDC__);
    printf("\n");
}
void disp()
{
    printf("\n Present Function : %s",__FUNCTION__);
}