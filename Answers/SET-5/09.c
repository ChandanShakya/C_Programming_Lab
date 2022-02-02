/*
9.  Program to find roots of quadratic equation using function.
    Use function findroots() which receive three coefficient a,b,c 
    of equation as  arguments and display roots.
*/

#include<stdio.h>
 
#include<math.h>

float findroots(float,float,float);

void main()
{
    float a,b,c;

	printf("Enter the value of coefficient a, b, c : ");
	scanf("%f%f%f",&a,&b,&c);
    
	findroots(a,b,c);
}

float findroots(float a,float b,float c)
{
    float d,x1,x2,imaginary,real;
    
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