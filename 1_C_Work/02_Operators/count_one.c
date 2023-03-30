#include <stdio.h>


int main()
{
    int num, zeros, ones, i;
	int SIZE = sizeof(int) * 8; 
    
    printf("Enter any number: ");
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for(i=0; i<SIZE; i++)
    {
       
        if(num & 1)
            ones++;
        else
            zeros++;

        
        num >>= 1;
    }

    
    //printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}
