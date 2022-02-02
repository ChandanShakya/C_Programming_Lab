/*
12.	Write a program to read age of a person and display remarks accordingly:
	Age			Remarks
	age<12		CHILD
	12<=age<20	TEEN
	20<=age<30	ADULT
	30<=age<55	YOUNG
	Age>=55		OLD
*/

#include<stdio.h>
 

void main()
{
	int age;
		
	printf("Enter your age in years : ");
	scanf("%d",&age);
	
	printf("\nRemarks : ");
	
	if(age<=0)
		printf("Invalid Input.");
	else
	{
		if(age<12)
			printf("CHILD");
		else
		{
			if(age<20)
				printf("TEEN");
			else
			{
				if(age<30)
					printf("ADULT");
				else
				{
					if(age<55)
						printf("YOUNG");
					else
						printf("OLD");
				}
			}
		}
	}
	
	 
}