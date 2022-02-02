/*
21.	Program to transpose of a matrix
*/

#include<stdio.h>
 

void main()
{
	int m[10][10],i,j,r,c;
	
	printf("Enter the dimension of matrix [MAX = 10x10] : ");
	scanf("%d %d",&r,&c);
	
	printf("\nEnter the elements of %d x %d matrix :\n",r,c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("element[%d][%d] : ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	
	printf("\nOriginal Matrix :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%3d",m[i][j]);
		
		printf("\n");
	}

	printf("\nTransposed Matrix :\n");
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%3d",m[j][i]);

		printf("\n");
	}

	 
}