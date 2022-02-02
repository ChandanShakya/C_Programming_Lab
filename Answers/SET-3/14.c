/*
14.	Write a program to check whether given number is prime or not.
*/

#include<stdio.h>
 

void main()
{
	int num,copy,count=0;
	
	printf("Enter a number to find prime or not : ");
	scanf("%d",&num);
	
	copy=num;
	
	if(num<2)
		printf("%d is neither prime nor composite.",num);
	else
	{
		while(num>1)
		{
			if(copy%num==0)
				count++;
			num--;
		}
		if(count==1)
			printf("%d is prime.",copy);
		else
			printf("%d is composite.",copy);
	}

	 
}