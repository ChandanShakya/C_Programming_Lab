/*
5.	Write a program to generate first 'n' odd terms.
*/

#include<stdio.h>
 

void main()
{
	int count=1,n,c=0;
	
	printf("Enter how many odd numbers to print? : ");
	scanf("%d",&n);
	
	while(c++<n)
	{
		printf("%4d. %6d\n",c,count);
		count+=2;
	}

	 
}