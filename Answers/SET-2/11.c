/*
11.	Write a program to read marks obtained in your final exams in all subjects 
	and find total marks, percentage, results (pass or fail), division.
	(assume all the necessary condition)
*/

#include<stdio.h>
 

void main()
{
	float mat,eng,c,acc,arch,total,percent;

	printf("Enter the marks in Maths II : ");
	scanf("%f",&mat);
	printf("Enter the marks in English II : ");
	scanf("%f",&eng);
	printf("Enter the marks in C Programming : ");
	scanf("%f",&c);
	printf("Enter the marks in Financial Accounting : ");
	scanf("%f",&acc);
	printf("Enter the marks in Computer Architecture : ");
	scanf("%f",&arch);
	
	total=mat+eng+c+arch+acc;
	percent=total/5;
	
	printf("\nTotal marks obtained : %.2f",total);
	printf("\nPercent obtained : %.2f%%",percent);
	
	if(mat>=40&&eng>=40&&c>=40&&arch>=40&&acc>=40)
	{
		printf("\n\nPassed\n");
		
		if(percent>=90)
			printf("Distinction");
		else
		{
			if(percent>=70)
				printf("First Division");
			else
			{
				if(percent>=50)
					printf("Second Division");
				else
					printf("Third Division");
			}
		}
	}
	else
		printf("\n\nFail");
	
	 
}