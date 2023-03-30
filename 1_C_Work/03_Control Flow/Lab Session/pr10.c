#include<stdio.h>

int main()
{
    int d = 0,i,j,k;
    for(i = 1;i <4; i++)
        for(j = 1;j <4; j++)
            for(k = 1;k <4; k++)
                if(((i+j+k)%3) == 0)
                    d++;
    printf("%d\n",d);      
}