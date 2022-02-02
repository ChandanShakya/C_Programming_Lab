/*
10.	Write a C program to read number of days 
	and convert it into years, months and days.
*/

#include<stdio.h>
 

int main()
{
	int day,year,months,date;
	
	printf("Enter the number of days : ");
	scanf("%d",&day);
	
	year=day/365;
	months=(day%365)/30;
	date=(day%365)%30;
	
	printf("\n%d days is equal to :",day);
	printf(" %d years %d months %d days",year,months,date);
	
	 
	return 0;
}