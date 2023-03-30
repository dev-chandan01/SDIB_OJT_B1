#include<stdio.h>
int main(){
   int a =9 ,b, c,d;
   b =(a++,++a);
   c = a++,++a;
   d = (a++,++a, a>>2);
    printf("%d %d %d",b, c,d);

}