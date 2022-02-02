/*
13.	Write a program to find sales person commission on sales amount 
	according to following conditions
	Sales amount		Commission
	<5000				0%
	>=5000 and < 10000	5%
	>=10000 and <15000	7%
	>=15000				10%
*/

#include<stdio.h>
 

void main()
{
	float sales;

	printf("Enter Sales Amount : ");
	scanf("%f",&sales);
	
	if(sales<0)
		printf("\nSales amount cannot be negative.");
	else
	{
		printf("\nCommission : Rs ");
		
		if(sales<5000)
			printf("0.00");
		else
		{
			if(sales<10000)
				printf("%.2f",sales*(5/100.0));
			else
			{
				if(sales<15000)
					printf("%.2f",sales*(7/100.0));
				else
					printf("%.2f",sales*(10/100.0));
			}
		}
	}

	 
}