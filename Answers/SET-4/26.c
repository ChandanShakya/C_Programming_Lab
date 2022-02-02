/*
26.	Write a program to concatenate string without using function.
*/

#include<stdio.h>
 

void main()
{
	char s1[20],s2[20],s3[40];
	int i=0,j=0;

	printf("Enter first string : ");
	gets(s1);
	
	printf("Enter second string : ");
	gets(s2);
	
	printf("\n%s + %s = ",s1,s2);
	
	while(s1[i]!='\0')
	{
		s3[i]=s1[i];
		i++;
	}
	
	while(s2[j]!='\0')
	{
		s3[i]=s2[j];
		i++;
		j++;
	}
	
	s3[i]='\0';
	
	printf("%s",s3);
	
	 
}