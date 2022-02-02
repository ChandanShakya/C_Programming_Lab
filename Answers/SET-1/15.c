/*
15.	Write a program to check whether 
	entered number is odd or even using ternary operator.(? :)
*/

#include<stdio.h>
 

int main()
{
	int n;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	n%2==0?printf("\n%d is even.",n):printf("\n%d is odd.",n);
	
	 
	return 0;
}