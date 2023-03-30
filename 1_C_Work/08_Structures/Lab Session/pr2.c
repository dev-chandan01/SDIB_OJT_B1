#include<stdio.h>

int main()
{
    struct simp
    {
        int i;
        char city[]="chennai";
    };

    struct simp s1 = {6};
    printf("%s\n",s1.city);
    printf("%d\n",s1.i);
}

//throws an error