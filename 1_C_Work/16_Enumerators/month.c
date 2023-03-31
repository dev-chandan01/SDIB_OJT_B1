#include<stdio.h>

enum days
{
    buffer,jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec

}month;

int main()
{
    int i;
    printf("\nEnter the month no: ");
    scanf("%d",&i);

    switch(i)
    {
        case jan: printf("January 0%d",jan);break;
        case feb: printf("February 0%d",feb);break;
        case mar: printf("March 0%d",mar);break;
        case apr: printf("April 0%d",apr);break;
        case may: printf("May 0%d",may);break;
        case jun: printf("June 0%d",jun);break;
        case jul: printf("July 0%d",jul);break;
        case aug: printf("August 0%d",aug);break;
        case sep: printf("September 0%d",sep);break;
        case oct: printf("October %d",oct);break;
        case nov: printf("November %d",nov);break;
        case dec: printf("December %d",dec);break;
        default: printf("\n %d",buffer);
    }
}