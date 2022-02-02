/*
33.	Write a program to count numbers of words from line of text.
*/

#include<stdio.h>
#include<string.h>
 

void main()
{
	char line[30];
	int x,r=0,i=0,j=0;
	
	printf("Enter a line of text [MAX < 30] : ");
	gets(line);
	
	strlwr(line);
	
	while(line[i]!='\0')
	{
		x=j;
	
		while(line[j]>='a'&&line[j]<='z')
			j++;
		
		if(j!=x)
			r++;
		
		j++;
		i++;
	}
	
	printf("%d",r);
	
	 
}