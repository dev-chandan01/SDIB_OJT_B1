#include<stdio.h>

void main()

{
    int age_r,age_s,age_a,youngest;
    printf("Enter ajays age:- ");
    scanf("%d",&age_a);
    printf("Enter Rams age:- ");
    scanf("%d",&age_r);
    printf("Enter Shyams age:- ");
    scanf("%d",&age_s);
    if(age_r < age_s && age_r < age_a ){
        printf("The youngest one is Ram");
    }
    else if(age_s < age_r && age_s < age_a ){
        printf("The youngest one is Shyam");
    }
    else if(age_a < age_s && age_a < age_r ){
        printf("The youngest one is Ajay");
    }
}
