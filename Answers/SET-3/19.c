/*
19.	Program to display the following output:
	A	B	C	D	E	F	G	H	I	J
*/

#include<stdio.h>
 

void main()
{
	char alpha='A';
	int i;
	
	for(i=0;i<10;i++)
		printf("%c ",alpha++);
	
	 
}