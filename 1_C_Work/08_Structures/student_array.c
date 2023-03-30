#include<stdio.h>


struct student
{
    char name[40];
    int id;
    float height;
}stu1[2];

int main()
{
    int i;
    for(i = 0; i<= 2; i++)
    {
        printf("Enter the data for student %d",i+1 );
        printf("\nEnter the student %d\nName :- ",i+1 );
        scanf("%s",&stu1[i].name);
        printf("\nId :- ");
        scanf("%d",&stu1[i].id);
        printf("\nHeight :- " );
        scanf("%f",&stu1[i].height);
    }

    for(i = 0; i<= 2; i++)
    {
        printf("\nData for student %d",i+1 );
        printf("\nStudent %d\nName :- %s ",i+1,stu1[i].name );
        printf("\nId :- %d",stu1[i].id);
        printf("\nHeight :- %f",stu1[i].height );
    }
}