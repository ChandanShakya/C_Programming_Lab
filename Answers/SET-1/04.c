/*
4.	Write a program to find Simple Interest and Amount.
*/

#include<stdio.h>
 

int main()
{
	float p,t,r,si,amt;

	printf("Enter the value of principle\t: Rs\t: ");
	scanf("%f",&p);
	printf("Enter the time\t\t\t: Years\t: ");
	scanf("%f",&t);
	printf("Enter the rate of interest\t: %%\t: ");
	scanf("%f",&r);

	si=(p*t*r)/100;
	amt=p+si;

	printf("\nSimple Interest\t: Rs %.2f\nAmount\t\t: Rs %.2f",si,amt);

	 
	return 0;
}