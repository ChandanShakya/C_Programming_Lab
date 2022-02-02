/*
4.	Write a program to generate first 10 natural number using do-while loop
*/

#include<stdio.h>
 

void main()
{
	int count=1;
	
	printf("The first 10 natural numbers are : ");
	
	do{
		printf("%d ",count);
	}while(++count<11);
	
	 
}