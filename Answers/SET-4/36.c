/*
36.	Write a program to sort {aman, akesh, anish, anam, anil, anju} in alphabetical order.
*/

#include<stdio.h>
#include<string.h>
 

void main()
{
	int i,j;
	char name[6][6]={"aman","akesh","anish","anam","anil","anju"},temp[6];
	
	printf("Original list :\n");
	
	for(i=0;i<6;i++)
		printf("%s ",name[i]);
	
	for(i=0;i<6-1;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}

	printf("\n\nArranged list :\n");
	
	for(i=0;i<6;i++)
		printf("%s ",name[i]);
	
	 
}