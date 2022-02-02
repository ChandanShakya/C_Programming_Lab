/*
	Design a structure : employee with members eid, name, post and salary.
	Write a program to read records of n employee and then display the detail of
	those employees whose post is "Clerk".
	Also disply the details of those employee whose salary is greater than or 
	equals to 50,000
*/

#include<stdio.h>
 
#include<string.h>

struct employee
{
	int eid;
	char name[30];
	char post[20];
	float salary;
};

void main()
{
	struct employee e[30];
	int n,i,clerkcount=0,salary50=0;

	printf("How many employee ? [MAX=30] :");
	scanf("%d",&n);

	printf("Enter the records of %d employees\n",n);

	for(i=0;i<n;i++)
	{
		printf("\nFor employee %d\n",i+1);

		printf("EID\t= ");
		scanf("%d",&e[i].eid);

		fflush(stdin);

		printf("Name\t= ");
		gets(e[i].name);

		printf("Post\t= ");
		gets(e[i].post);

		strupr(e[i].post);

		if(strcmp((e[i].post),"CLERK")==0)
			clerkcount++;

		printf("Salary\t= ");
		scanf("%f",&e[i].salary);

		if(e[i].salary>=50000)
			salary50++;
	}

	if(clerkcount==0)
		printf("NO Clerks found.\n");
	else
	{
		printf("\nDetails of Clerks\n");
		printf("EID\tNAME\t\t\tPOST\tSALARY\n");
		
		for(i=0;i<n;i++)
		{
			if(strcmp(e[i].post,"CLERK")==0)
			{
				printf("%d\t%s\t\t",e[i].eid,e[i].name);
				printf("%s\t%.2f\n",e[i].post,e[i].salary);
			}
		}
	}
	
	if(salary50==0)
		printf("NO employee with salary >= 50000 found.\n");
	else
	{
		printf("\nDetails of Employees with Salary >= 50000\n");
		printf("EID\tNAME\t\t\tPOST\tSALARY\n");
		for(i=0;i<n;i++)
		{
			if(e[i].salary>=50000)
			{
				printf("%d\t%s\t\t",e[i].eid,e[i].name);
				printf("%s\t%.2f\n",e[i].post,e[i].salary);
			}
		}
	}

	 
}