/*
1.  Design a structure: Distance with members : feet and inches, with
	appropriate datatype.
	Write the main program in C to read distance and display it in appropriate
	format.
*/

#include<stdio.h>
 

struct distance
{
    int feet;
    float inches;
};

void main()
{
	struct distance d1;

	printf("Enter distance in feet & inches : ");
 	scanf("%d %f",&d1.feet,&d1.inches);

 	while(d1.inches>=12)
 	{
 		d1.inches-=12;
		d1.feet+=1;
	}

	printf("\nDistance\n");
 	printf("%d\'\t-\t%.2f\"",d1.feet,d1.inches);

 	   
}