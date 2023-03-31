#include<stdio.h>
#include<string.h>

#define String_Concat(res,s1,s2)  strcat(res,#s1); strcat(res,#s2); 

int main()
{
    char nm[30]={0};
    String_Concat(nm,Rugged,Solutions);

    printf("\n Name of the organization is %s\n",nm);
}