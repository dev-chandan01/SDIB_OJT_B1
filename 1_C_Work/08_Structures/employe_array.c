#include<stdio.h>


struct employee
{
    char name[40];
    int id;
    float salary;
    char desig[20];
}emp[2];

int main()
{
    int i;
    for(i = 0; i<= 2; i++)
    {
        printf("Enter the data for employee %d",i+1 );
        printf("\nEnter the employee %d\nName :- ",i+1 );
        scanf("%s",&emp[i].name);
        printf("\nId :- ");
        scanf("%d",&emp[i].id);
        printf("\nHeight :- " );
        scanf("%f",&emp[i].salary);
        printf("\nDesignation :- ");
        scanf("%s",&emp[i].desig);
    }

    for(i = 0; i<= 2; i++)
    {
        printf("\nData for employee %d",i+1 );
        printf("\nemployee %d\nName :- %s ",i+1,emp[i].name );
        printf("\nId :- %d",emp[i].id);
        printf("\nSalary :- %f",emp[i].salary );
        printf("\nDesignation :- %s",emp[i].desig);
    }
}