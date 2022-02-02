/*
10.  Program to copy a float array using pointer.
*/

#include<stdio.h>
 

void main()
{
	int i;
	float *p,o[5]={1.1,2.3,3.4,4.5,5.6},c[5];

	p=o;

	for(i=0;i<5;i++)
		c[i]=*p++;
	
	for(i=0;i<5;i++)
		printf("%f\n",c[i]);
	
	 
}