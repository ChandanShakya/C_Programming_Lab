/*
7.	Write a program find the sum of first 'n' natural numbers
*/

#include<stdio.h>
 

void main()
{
	int n,c=0,sum=0,count=1;
	
	printf("Enter how many numbers to find sum of? : ");
	scanf("%d",&n);
	
	while(c++<n)
	{
		sum+=count++;
	}
	
	printf("The sum is %d",sum);
	
	 
}