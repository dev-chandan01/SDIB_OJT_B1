#include<stdio.h>

struct marks
{
    int mat;
    int phy;
    int chem;
    int total;
    float avg;

};


struct student
{
    char name[40];
    int id;
    float height;
    struct marks m;
}stu1;

int main()
{
    
        printf("Enter the data for student:");
        printf("\nName :- ");
        scanf("%s",&stu1.name);
        printf("\nId :- ");
        scanf("%d",&stu1.id);
        printf("\nHeight :- " );
        scanf("%f",&stu1.height);
        printf("\nMaths marks :- " );
        scanf("%d",&stu1.m.mat);
        printf("\nPhysics marks:- " );
        scanf("%d",&stu1.m.phy);
        printf("\nChemistry marks :- " );
        scanf("%d",&stu1.m.chem);

        stu1.m.total = stu1.m.mat + stu1.m.phy + stu1.m.chem;
        stu1.m.avg = stu1.m.total / 3;


    
        printf("\nData for student ");
        printf("\nStudent Name :- %s ",stu1.name );
        printf("\nId :- %d",stu1.id);
        printf("\nHeight :- %f",stu1.height );
        printf("\nMaths :- %d",stu1.m.mat);
        printf("\nPhysics :- %d",stu1.m.phy);
        printf("\nChemistry :- %d",stu1.m.chem);
        printf("\nTotal Marks :- %d",stu1.m.total);
        printf("\nPercentage :- %f",stu1.m.avg);
}
