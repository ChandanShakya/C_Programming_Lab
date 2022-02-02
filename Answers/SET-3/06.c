/*
6.	Write a program to generate first 'n' even terms and find their sum also.
*/

#include<stdio.h>
 

void main()
{
	int n,c=0,sum=0,count=2;

	printf("Enter how many even numbers to print? : ");
	scanf("%d",&n);
	
	while(c++<n)
	{
		printf("%4d. %6d\n",c,count);
		sum+=count;
		count+=2;
	}
	
	printf("The sum is %d",sum);

	 
}