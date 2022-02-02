/*
16.	Write a program to count total numbers of prime number between 1 to given number 'n'.
*/

#include<stdio.h>
 

void main()
{
	int range,i,j,prime,count=1;
	
	printf("Enter upto where you want to find? : ");
	scanf("%d",&range);
	
	if(range<2)
		printf("Number less than 2 is neither prime nor composite.");
	else
	{
		for(i=2;i<=range;i++)
		{
			prime=0;
			
			for(j=1;j<(i/2);j++)
				if(i%j==0)
					prime++;
			
			if(prime==1)
				count++;
		}
		printf("There are %d prime numbers between 1 and %d",count,range);
	}
	
	 
}