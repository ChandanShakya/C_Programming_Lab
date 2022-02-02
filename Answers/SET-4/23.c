/*
23.	Write a program to convert string into upper case without using function.
*/

#include<stdio.h>
 

void main()
{
	int i;
	char string[50];
	
	printf("Enter a line of string [MAX Length < 50] : ");
	gets(string);
	
	for(i=0;string[i]!='\0';i++)
		if(string[i]>='a'&&string[i]<='z')
			string[i]-=32;
	
	printf("%s",string);
}