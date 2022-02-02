/*
11.	Write a program to find the factorial of a given number.
*/

#include<stdio.h>
 

void main()
{
	int n,f=1,copy;
	
	printf("Enter an integer to calculate its factorial : ");
	scanf("%d",&n);
	
	copy=n;
	
	if(n<0)
		printf("\nNegative number factorial are undefined.");
	else if(n==0)
		printf("0! = 1");
	else
	{
		while(n!=1)
		{
			f=f*n;
			n--;
		}
		printf("%d! = %d",copy,f);
	}
	
	 
}