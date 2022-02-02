/*
27.	Write a program to check whether a word is palindrome or not.
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
	char s[20],c[20];
	int i,flag=0;

	printf("Enter the string : ");
	gets(s);
	
	for(i=0;i<20;i++)
		if(s[i]>='A'&&s[i]<='Z')
			c[i]=s[i]+32;
		else
			c[i]=s[i];

	while(s[flag]!='\0')
		flag++;

	for(i=0;i<=flag/2;i++)
		if(c[i]!=c[flag-i-1])
		{
			printf("\"%s\" is not a palindrome",s);
			
			 
			exit(0);
		}
	
	printf("\"%s\" is a palindrome",s);
	
	 
}