/*
25.	Write a program to copy string without using function.
*/

#include<stdio.h>
 

void main()
{
	int i;
	char o[30],c[30]; 
	
	printf("Enter a line of string [MAX length < 30] : ");
	gets(o);
	
	for(i=0;o[i]!='\0';i++)
		c[i]=o[i];
	
	c[i]='\0';
	
	printf("\nOriginal String\t: %s\n",o);
	printf("Copied String\t: %s",c);
	
	 
}