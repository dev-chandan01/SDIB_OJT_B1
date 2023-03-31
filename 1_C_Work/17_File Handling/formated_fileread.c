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
    fp = fopen("student.dat","r");
    printf("\nStudents Details\n");
    while((fscanf(fp,"%d %[^\t] %d %c",&s.roll,s.name,&s.age,&s.gender))!=EOF)
    {
        printf("\n%4d %-20s %4d %1c",s.roll,s.name,s.age,s.gender);
    }
    printf("\n");
    fclose(fp);
}
