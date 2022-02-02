/*
13.	Write a program to find the reverse of a given number.
*/

#include<stdio.h>
 

void main()
{
	int num,copy,rem,rev=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	copy=num;

	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}

	printf("Reverse of %d is %d",copy,rev);

	 
}