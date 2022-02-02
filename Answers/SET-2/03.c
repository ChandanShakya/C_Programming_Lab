/*
3.	Write a program to check whether a number is odd or even.
*/

#include<stdio.h>
 

void main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n%2==0)
		printf("\n%d is even.",n);
	else
		printf("\n%d is odd.",n);
	
	 
}