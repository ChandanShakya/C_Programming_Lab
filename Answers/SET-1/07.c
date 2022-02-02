/*
7.	Write a program to read temperature in Celsius and convert it into Fahrenheit. 
*/

#include<stdio.h>
 

int main()
{
	float f,c;
	
	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&c);
	
	f=((c*9)/5)+32;
	
	printf("\n%.2fC = %.2fF",c,f);
	
	 
	return 0;
}