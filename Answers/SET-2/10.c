/*
10.	Write a program to read coefficient of quadratic equation 
	and finds all its roots.
*/

#include<stdio.h>
#include<math.h>
 

void main()
{
	float a,b,c,d,x1,x2,imaginary,real;
	
	printf("Enter the value of coefficient a, b, c : ");
	scanf("%f%f%f",&a,&b,&c);
	
	d=(b*b-4*a*c);
	
	if(a==0)
		printf("\nYou have entered linear equation.");
	else if(d>=0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		
		printf("\nThe first root  : %.2f\nThe second root : %.2f",x1,x2);
	}
	else
	{
		d=-d;
		real=-b/(2*a);
		imaginary=sqrt(d)/(2*a);
		
		printf("\nThe first root  : %g + %gi\nThe second root : %g - %gi",real,imaginary,real,imaginary);
	}
	
	 
}