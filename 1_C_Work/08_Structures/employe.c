#include<stdio.h>


struct Employee
{
    char name;
    int id;
    float salary;
    char desig[20];
}emp;

int main()
{
    
        printf("Enter the data for Employee:");
        printf("\nName :- ");
        scanf("%s",&emp.name);
        printf("\nId :- ");
        scanf("%d",&emp.id);
        printf("\nsalary :- " );
        scanf("%f",&emp.salary);
        printf("\nDesignation :- ");
        scanf("%s",&emp.desig);
        

    
        printf("\nData for Employee ");
        printf("\nEmployee Name :- %c ",emp.name );
        printf("\nId :- %d",emp.id);
        printf("\nsalary :- %f",emp.salary );
        printf("\nDesignation :- %s",emp.desig);

        printf("\nThe size of employee is :- %d",sizeof(emp));

}