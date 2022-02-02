/*
29.	Write a program to check whether a word is palindrome or not using function.
*/

#include<stdio.h>
#include<string.h>
 

void main()
{
	char s[30],c1[30],c2[30];
	
	printf("Enter a string [MAX <30] : ");
	gets(s);
	
	strcpy(c1,s);
	
	strlwr(c1);
	strcpy(c2,c1);
	strrev(c1);
	
	if(strcmp(c2,c1)==0)
		printf("%s is a palindrome",s);
	else
		printf("%s is not a palindrome",s);
	
	 
}