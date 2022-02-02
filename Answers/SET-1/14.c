/*
14.	Write a program to print the size of all primitives data types.
	(int, float, double, etc.) [hint: use sizeof( ) operator.]
*/

#include<stdio.h>
 

int main()
{
	printf("For character type variable\n");
	printf("char\t\t\t: %d Bytes\n",sizeof(char));
	printf("signed char\t\t: %d Bytes\n",sizeof(signed char));
	printf("unsigned char\t\t: %d Bytes\n\n\n",sizeof(unsigned char));
	

	printf("For integer type variable\n");
	printf("int\t\t\t: %d Bytes\n",sizeof(int));
	printf("signed int\t\t: %d Bytes\n",sizeof(signed int));
	printf("unsigned int\t\t: %d Bytes\n\n",sizeof(unsigned int));
	
	printf("short int\t\t: %d Bytes\n",sizeof(short));
	printf("signed short int\t: %d Bytes\n",sizeof(signed short));
	printf("unsigned short int\t: %d Bytes\n\n",sizeof(unsigned short));
	
	printf("long int\t\t: %d Bytes\n",sizeof(long));
	printf("signed long int\t\t: %d Bytes\n",sizeof(signed long));
	printf("unsigned long int\t: %d Bytes\n\n\n",sizeof(unsigned long));
	
	
	printf("For float type variable\n");
	printf("float\t\t\t: %d Bytes\n",sizeof(float));
	printf("double\t\t\t: %d Bytes\n",sizeof(double));
	printf("long double\t\t: %d Bytes",sizeof(long double));
	
	 
	return 0;
}