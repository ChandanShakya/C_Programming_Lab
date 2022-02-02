/*
3.	Program to find maximum of two number using function.
*/

#include<stdio.h>
 

float max(float,float);

void main()
{
	float num1,num2,maxim;

	printf("Enter the first number  : ");
	scanf("%f",&num1);
	
	printf("Enter the Second number : ");
	scanf("%f",&num2);
	
	maxim=max(num1,num2);
	
	printf("\nThe maximum of %g and %g is %g.",num1,num2,maxim);
	
	 
}

float max(float num1,float num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}