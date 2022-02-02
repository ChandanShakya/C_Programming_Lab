/*
24.	Write a program to find reverse of string without using function.
*/

#include<stdio.h>
 

void main()
{
	int i,last,n=0;
	char string[30],reverse[30];
	
	printf("Enter a line of string [MAX length < 30] : ");
	gets(string);
	
	for(i=0;string[i]!='\0';i++)
		last=i;
	
	for(i=last;i>=0;i--)
		reverse[n++]=string[i];
	
	reverse[n]='\0';

	printf("\nOriginal string\n: %s\n",string);
	printf("Reversed string\n: %s",reverse);
    
	 
}
