/*
1.	Write a program to read a lowercase character and convert it into uppercase.
*/

#include<stdio.h>
#include <conio.h>

void main()
{
	char a;
	
	printf("Enter an alphabet in lowercase : ");
	scanf("%c",&a);
	
	if(a>96&&a<123)
		printf("\nThe alphabet %c in uppercase : %c",a,a-32);
	else
		printf("Invalid input.");
	
	 
}