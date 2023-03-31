#include<stdio.h>
typedef struct 
{
    /* data */
    char name[40],gender;
    int age,roll;
}student;

int main()
{
    char ch;
    student s;
    FILE *fp;
    fp = fopen("student.dat","w");

    printf("Enter Student Details\n");
    while(1)
    {
        printf("\nEnter student roll no : ");
        scanf("%d",&s.roll);
        printf("\nEnter student name : ");
        scanf(" %[^\n]",s.name);
        printf("\nEnter student gender : ");
        scanf(" %c",&s.gender);
        printf("\nEnter student age  : ");
        scanf("%d",&s.age);
        printf("\nContinue.....(y/n) : ");
        scanf(" %c",&ch);
        fprintf(fp,"\n%4d\t%-s\t%4d\t%1c",s.roll,s.name,s.age,s.gender);
        if(ch=='n' || ch =='N')
                break;
    }
    fclose(fp);
}