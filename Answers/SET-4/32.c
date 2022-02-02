/*
32.	Write a program to remove all space from a line of text
*/

#include<stdio.h>
 

void main()
{
	int i,j=0;
	char line[30],copy[30];
	
	printf("Enter a line of text [Max <30] : ");
	gets(line);
	
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]!=' ')
		{
			copy[j]=line[i];
			j++;
		}
	}
	
	copy[j]='\0';
	
	printf("The line with spaces : %s\n",line);
	printf("The line without spaces : %s\n",copy);
	
	 
}