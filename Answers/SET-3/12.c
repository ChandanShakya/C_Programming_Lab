/*
12.	Write a program to find the sum of digits of a given number.
*/

#include<stdio.h>
 

void main()
{
	int num,sum=0,copy;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	copy=num;
	
	while(num!=0)
	{
		sum+=(num%10);
		num/=10;
	}
	
	printf("Sum of digits of %d is %d.",copy,sum);
	
	 
}