/*
8.	Write a program to read a character 
	and check whether it is letter, digits or others characters.
*/

#include<stdio.h>
 

void main()
{
	char a;
	
	printf("Enter a character : ");
	scanf("%c",&a);
	
	if(a>47&&a<58)
		printf("\n%c is a digit.",a);
	else if(a>64&&a<91||a>96&&a<123)
		printf("\n%c is a letter.",a);
	else
		printf("\n%c is an other character.",a);
	
	 
}