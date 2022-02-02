/*
6.	Write a program to read temperature in Fahrenheit  and convert it into Celsius.
	C=(5(F-32))/9
*/ 

#include<stdio.h>
 

int main()
{
	float f,c;

	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&f);

	c=(5*(f-32))/9;

	printf("\n%.2fF = %.2fC",f,c);

	 
	return 0;
}