/*
9.	Write a program to check whether a year is leap or not.
*/

#include<stdio.h>
 

void main()
{
	int year;
	
	printf("Input the year : ");
	scanf("%d",&year);
	
	if(year%400==0||(year%4==0&&year%100!=0))
		printf("\nThe year %d is a leap year.",year);
	else
		printf("\nThe year %d is not a leap year.",year);
	
	 
}