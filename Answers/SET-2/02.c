/*
2.	Write a program to read a number 
	and check whether it is positive or negative.
*/

#include<stdio.h>
 

void main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num==0)
		printf("\nThe number is zero.");
	else if(num>0)
		printf("\n%d is positive.",num);
	else
		printf("\n%d is negative.",num);

	 
}