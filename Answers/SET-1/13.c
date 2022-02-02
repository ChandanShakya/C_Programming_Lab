/*
13.	Write a program to convert Distance in meter into kilometer and meter.
	[1km=1000m]
*/

#include<stdio.h>
 

int main()
{
	float meter,m;
	int km,copy;
	
	printf("Enter the distance in meter : ");
	scanf("%f",&meter);
	
	copy=meter;
	km=copy/1000;
	m=(copy%1000)+(meter-copy);
	
	printf("\n%.2fm = %dKm and %.2fm",meter,km,m);
	
	 
	return 0;
}