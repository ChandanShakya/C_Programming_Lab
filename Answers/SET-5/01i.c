/*
1.	Program to calculate simple interest using function.
i.	With function returning values and passing arguments
*/

#include<stdio.h>
 

float si(float,float,float);

void main()
{
	float p,t,r,sin;
	
	printf("Enter the value of Principle : ");
	scanf("%f",&p);
	
	printf("Enter the value of Time : ");
	scanf("%f",&t);
	
	printf("Enter the value of Rate : ");
	scanf("%f",&r);
	
	sin=si(p,t,r);
	
	printf("\nThe Simple Interest is : %.2f",sin);
	
	 
}

float si(float p,float t,float r)
{
	return (p*t*r/100);
}