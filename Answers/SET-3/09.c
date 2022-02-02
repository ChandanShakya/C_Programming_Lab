/*
9.	Write a program to find sum of cube of first 10 natural number.
*/

#include<stdio.h>
 

void main()
{
	int cube,n=0,sum=0;
	
	while(n++<10)
	{
		cube=n*n*n;
		sum+=cube;	
	}
	
	printf("The sum of cube of the first 10 natural number is %d.",sum);
	
	 
}