/*
18.	Program to display multiplication table of 'n' as:
	1	2	3	4	5	6	7	8	9	10
	2	4	6	8	10	12	14	16	18	20
	3	6	9	12	15	18	21	24	27	30
*/

#include<stdio.h>
 

void main()
{
	int i,j,num;
	
	printf("Enter upto which multiplication table to show ? :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
			printf("%4d ",i*j);
		
		printf("\n");
	}
	
	 
}