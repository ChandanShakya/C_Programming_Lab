/*
30.	Write a program to read line of text and delete all the occurrence of word "that".
*/

#include<stdio.h>
#include<string.h>
 

void main()
{
	int i,j=0,first=0;
	char s[30],new[30];
	
	printf("Enter a line of text : ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(i==0 && (s[i]=='t' && s[i+1]=='h' && s[i+2]=='a' 
		&& s[i+3]=='t' && s[i+4]==' '))
		{
			i+=4;
			first=1;
		}
		
		if(s[i]==' ' && s[i+1]=='t' && s[i+2]=='h' && s[i+3]=='a' && s[i+4]=='t'
		&& (s[i+5]==' ' || s[i+5]==',' || s[i+5]=='.' || s[i+5]=='\0'))
		{
			i+=4;
		}
		else
		{
			new[j]=s[i];
			j++;
		}
	}
	
	new[j]='\0';
	
	if(first==1)
		for(i=0;new[i]!='\0';i++)
			new[i]=new[i+1];

	printf("The Original String : %s\n",s);
	printf("The Modified String : %s",new);
	
	 
}