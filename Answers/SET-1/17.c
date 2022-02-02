/*
17.	Write a program to read four different numbers and find the largest numbers.
*/

#include<stdio.h>
 

int main()
{
	int n1,n2,n3,n4,l;
	
	printf("Enter the first number : ");
	scanf("%d",&n1);
	printf("Enter the second number : ");
	scanf("%d",&n2);
	printf("Enter the third number : ");
	scanf("%d",&n3);
	printf("Enter the fourth number : ");
	scanf("%d",&n4);
	
	l=n1>n2?n1:n2;
	l=l>n3?l:n3;
	l=l>n4?l:n4;
	
	printf("\nThe largest number among ( %d %d %d %d ) is %d.",n1,n2,n3,n4,l);
	
	 
	return 0;
}