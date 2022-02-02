/*
1.	Program to calculate simple interest using function.
iii.With function returning no values and passing arguments
*/

#include<stdio.h>
 

float si(float,float,float);

void main()
{
	float p,t,r;
	
	printf("Enter the value of Principle : ");
	scanf("%f",&p);
	
	printf("Enter the value of Time : ");
	scanf("%f",&t);
	
	printf("Enter the value of Rate : ");
	scanf("%f",&r);
	
	si(p,t,r);	
}

float si(float p,float t,float r)
{
	printf("\nThe Simple Interest is : %.2f",(p*t*r/100));
	
	 
}