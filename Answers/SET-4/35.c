/*
35.	Write a program to read N words and sort them in alphabetical order.
*/

#include<stdio.h>
#include<string.h>
 

void main()
{
	int n,i,j;
	char c[20][30],temp[30];
	
	printf("How many words [MAX < 20] : ");
	scanf("%d",&n);
	
	fflush(stdin);
	
	for(i=0;i<n;i++)
	{
		printf("%2d : ",i+1);
		gets(c[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(c[i],c[j])>0)
			{
				strcpy(temp,c[i]);
				strcpy(c[i],c[j]);
				strcpy(c[j],temp);
			}
		}
	}
	
	printf("The words are :\n");
	
	for(i=0;i<n;i++)
		printf("%2d : %s\n",i+1,c[i]);
	
	 
}