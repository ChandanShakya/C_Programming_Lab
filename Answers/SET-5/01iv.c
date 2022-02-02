/*
1.	Program to calculate simple interest using function.
iv.	With function returning no values and passing no arguments
*/

#include<stdio.h>
 

float si();

void main()
{
	si();
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
	
	printf("\nThe Simple Interest is : %.2f",p*t*r/100);

	 
}