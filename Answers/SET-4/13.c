/*
13.	Write a program to read N numbers in an array 
	and then increment the elements by constant C,
	where C is entered by users.
*/

#include<stdio.h>
 

void main()
{
	int n,i;
	float m[20],C;
	
	printf("How many numbers to read ? [Max = 20] : ");
	scanf("%d",&n);
	
	printf("Enter the %d numbers :\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&m[i]);
	}
	
	printf("\nThe numbers before increment :\n");
	
	for(i=0;i<n;i++)
		printf("%-6g",m[i]);
	
	printf("\n\nEnter a constant that will increment the numbers : ");
	scanf("%f",&C);
	
	printf("\nThe numbers after increment :\n");
	
	for(i=0;i<n;i++)
	{
		m[i]+=C;
		printf("%-6g",m[i]);
	}
	
	 
}