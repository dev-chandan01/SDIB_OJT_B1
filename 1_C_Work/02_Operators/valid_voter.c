#include<stdio.h>

void main()

{
    int age;
    printf("Enter your age:- ");
    scanf("%d",&age);

    if(age > 18){
        printf("Eligible for Voting");
    }
    else if(age < 18){
        printf("Not-Eligible for Voting");
    }
    else {
        printf("Please apply for Voter Id Card");
    }
    
}