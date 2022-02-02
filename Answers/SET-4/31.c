/*
31.	Write a program to read a line of text 
	and search the substring from that line.
*/

#include<stdio.h>
 
#include<string.h>

void main()
{
	int len,i,j,count=0;
	char string[30],copy[30],search[30];
	
	printf("Enter a line of text [MAX <30] : ");
	gets(string);
	
	printf("Enter which string to search ? : ");
	gets(search);
	
	len=strlen(search);
	
	for(i=0;string[i]!='\0';i++)
	{
		if(i==0&&string[len]==' ')
		{
			strncpy(copy,string,len);
			if(strcmp(copy,search)==0)
				count++;
		}
		else if(string[i-1]==' '&&(string[i+len]==' '||string[i+len]=='\0')||string[i+len]=='.'||string[i+len]==',')
		{
			for(j=0;j<len;j++)
				copy[j]=string[i+j];
			
			if(strcmp(copy,search)==0)
				count++;
			
		}
		else
			continue;

	}
	if(count==0)
		printf("\"%s\" is not found.",search);

	else
		printf("\"%s\" was found in %d places.",search,count);
	
	 
}