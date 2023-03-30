#include<stdio.h>

int main()
{
	float p,c,m,avg;
	printf("Enter the marks of the subjects:-\n");
	scanf("%f\n",&p);
	scanf("%f\n",&c);
	scanf("%f",&m);
	avg = (p+c+m)/3;
	printf("Your Percentage is : %f\n",avg);
    if(p >= 35 && c >= 35 && m >=35)
    {
	    if(avg >= 75)
	    {
		    printf("You passed with Distinction\n");
        
	    }
	    else if(avg >= 65)
	    {
		    printf("You passed with First Class\n");
        
	    }
	    else if(avg>=55)
	    {
		    printf("You passed with Second Class\n");
        
	    }
	    else if(avg >= 45)
	    {
		    printf("You just passed\n");
        
	    }
    }
	else
	{
		printf("Sorry ,You Failed !!!");
    }
	
	
}
