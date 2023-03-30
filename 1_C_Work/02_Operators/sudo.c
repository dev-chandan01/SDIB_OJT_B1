#include<stdio.h>

int main()
{
  int digit = 0;
  for(; digit <= 9; )
	digit++;
  digit *= 2;
  --digit;
  printf("%d",digit);
}
