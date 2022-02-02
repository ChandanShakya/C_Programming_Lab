/*
15.	Write a program to print all the prime numbers between 1 to 100.
*/

#include<stdio.h>
 

void main()
{
	int num,next=0,count;

	printf("The prime numbers between 1 to 100 are :\n");
	
	while(next++<100)
	{
		count=0;
		num=next;
		
		while(num-->1)
			if(next%num==0)
				count++;
		
		if(count==1)
			printf("%-3d",next);
	}
	
	 
}