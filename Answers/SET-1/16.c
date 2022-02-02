/*
16.	Write a program to read three different numbers and find the smallest one.
*/

#include<stdio.h>
 

int main()
{
	int n1,n2,n3,s;
	
	printf("Enter the first number\t: ");
	scanf("%d",&n1);
	printf("Enter the second number\t: ");
	scanf("%d",&n2);
	printf("Enter the third number\t: ");
	scanf("%d",&n3);
	
	s=n1>n2?n2:n1;
	s=s>n3?n3:s;
	
	printf("\nThe smallest number among ( %d %d %d ) is %d.",n1,n2,n3,s);
	
	 
	return 0;
}