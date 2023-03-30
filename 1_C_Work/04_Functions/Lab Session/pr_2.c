#include<stdio.h>

int reverse(int);

int main()
{
    int no =5;
    reverse(no);

}

int reverse(int no)
{
    if(no == 0)
        return 0;
    else
        printf("%d,",no);
    reverse(--no);
}