#include<stdio.h>


struct student
{
    char name[40];
    int id;
    float height;
}stu1;

int main()
{
    
        printf("Enter the data for student:");
        printf("\nEnter the student %d\nName :- ");
        scanf("%s",&stu1.name);
        printf("\nId :- ");
        scanf("%d",&stu1.id);
        printf("\nHeight :- " );
        scanf("%f",&stu1.height);

    
        printf("\nData for student ");
        printf("\nStudent %d\nName :- %s ",stu1.name );
        printf("\nId :- %d",stu1.id);
        printf("\nHeight :- %f",stu1.height );

}