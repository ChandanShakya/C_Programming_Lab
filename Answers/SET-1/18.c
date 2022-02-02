/*
18.	Write a program to read number of male and female student in a class and 		finally find the ratio of female and male students. 
	Use variable of appropriate data types.
*/

#include<stdio.h>
 

int main()
{
	int male,female;
	float ratio;
	
	printf("Enter the number of female students\t: ");
	scanf("%d",&female);
	printf("Enter the number of male students\t: ");
	scanf("%d",&male);
	
	ratio=(float)female/male;

	male!=0?(printf("\nThe ratio of female and male students ( %d : %d ) = %.2f",female,male,ratio)):(printf("\nThe ratio of female and male students ( %d : %d ) = Undefined",female,male));

	 
	return 0;
}