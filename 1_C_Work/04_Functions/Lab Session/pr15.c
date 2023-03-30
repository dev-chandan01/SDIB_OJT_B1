#include<stdio.h>
int function(int ,int);
int main()
{
    int a = 25, b =24+1,c;
    printf("%d",function(a,b));

}

int function(int x ,int y)
{
     return (x - (x == y));
}