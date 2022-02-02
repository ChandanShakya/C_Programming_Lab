/*
4.	Write a program to read cost price and selling price of a good 
	and find profit or loss amount.
*/

#include<stdio.h>
 

void main()
{
	float cp,sp,pl;
	
	printf("Enter the cost price\t: ");
	scanf("%f",&cp);
	printf("Enter the selling price\t: ");
	scanf("%f",&sp);
	
	if(cp==sp)
		printf("\nThere will be neither profit nor loss.");
	else if(sp>cp)
		printf("\nThere will be profit of %g.",sp-cp);
	else
		printf("\nThere will be loss of %g.",cp-sp);
		
	 
}