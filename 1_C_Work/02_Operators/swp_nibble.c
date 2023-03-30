#include <stdio.h>
 
unsigned char swapNibbles(unsigned char x)
{
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
}
 
int main()
{
    unsigned char x;
    printf("Enter a number :- ");
    scanf("%u",&x);
    printf("%u", swapNibbles(x));
    return 0;
}
