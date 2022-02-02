/*
18.	Write a program to find the sum of rows and column of matrix.
*/

#include<stdio.h>
 

#define MAX 20

void main()
{
	int m[MAX][MAX],r,c,i,j;
	int row[MAX],col[MAX];
	
	printf("Enter the dimension <20x20 : ");
	scanf("%d %d",&r,&c);
	
	printf("\nEnter the elements of the %d x %d matrix :\n",r,c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("m[%d][%d] : ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
		
		printf("\n");
	}
	
	printf("Elements of the matrix :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%6d",m[i][j]);
		
		printf("\n");
	}

	printf("\n");
	
	for(i=0;i<r;i++)
	{
		row[i]=0;
		
		for(j=0;j<c;j++)
			row[i]+=m[i][j];

		printf("The sum of elements of row %d is : %d\n",i+1,row[i]);
	}
	
	printf("\n");
	
	for(i=0;i<c;i++)
	{
		col[i]=0;
		
		for(j=0;j<r;j++)
			col[i]+=m[j][i];
		
		printf("The sum of elements of column %d is : %d\n",i+1,col[i]);
	}

	 
}