#include<stdio.h>
#define MAX 10
#define MIN 20

int main()
{
    #if MAX
        #if defined MIN
                #if(MAX<0 && MIN<0)
                    printf("\npositive number");
                #else
                    printf("\nNegative number");
                #endif
        #else
                printf("\nERROR: MIN not Defined\n");
        #endif
    #else
        printf("\nERROR: MAX not Defined\n");
    #endif
        

}