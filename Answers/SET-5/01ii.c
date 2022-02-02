/*
1.	Program to calculate simple interest using function.
ii.	With function returning values and passing no arguments
*/

#include<stdio.h>
 

float si();

void main()
{
	printf("\nThe Simple Interest is : %.2f",si());
	 
}

float si()
{
	float p,t,r;
	
	printf("Enter the value of Principle : ");
	scanf("%f",&p);
	
	printf("Enter the value of Time : ");
	scanf("%f",&t);
	
	printf("Enter the value of Rate : ");
	scanf("%f",&r);
	
	return (p*t*r/100);
}