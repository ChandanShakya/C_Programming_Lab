/*
22.	Program to generate multiplication table up to 
	number 'n' entered by user as:
		1 x		1  =	1
		1 x		2  =	2
	...
		1 x		10 = 	20
*/

#include<stdio.h>
 

void main()
{
	int n,i;
	
	printf("Enter the number for multiplication table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
		printf("%4d x %4d = %4d\n",n,i,n*i);
	
	 
}