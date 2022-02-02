/*
11.	Write a program to read N items 
	and sort them in ascending or descending order 
	depending upon user choice.
	( for e.g. 'a' for ascending and 'd' for descending)
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
	int a[20],i,j,num,swap;
	
	printf("Enter how many numbers to arrange [Max = 20] : ");
	scanf("%d",&num);
	
	printf("\nEnter %d numbers\n",num);
	
	for(i=0;i<num;i++)
	{
		printf("%d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	char choice;
	
	printf("\nPress \'a\' to sort in ascending order.");
	printf("\nPress \'d\' to sort in descending order.");
	printf("\nChoice : ");
	
	fflush(stdin);
	
	scanf("%c",&choice);
	
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			switch(choice)
			{
				case 'a' :
				case 'A' :
							if(a[i]>a[j])
							{
								swap=a[i];
								a[i]=a[j];
								a[j]=swap;
							}
							break;
				case 'd' :
				case 'D' :
							if(a[i]<a[j])
							{
								swap=a[i];
								a[i]=a[j];
								a[j]=swap;
							}
							break;
				default :
							printf("Invalid choice");
							 
							exit(0);
			}
		}
	}

	printf("\nArranged Form\n");
	
	for(i=0;i<num;i++)
		printf("%d\n",a[i]);
	
	 
}