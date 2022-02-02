/*
5.  Program to demonstrate the use of pointers.
*/

#include<stdio.h>
 

void main()
{
    int *p,a;

    p=&a;
    *p=10;

    printf("a = %d\t Address of a = %x\n",a,&a);
    printf("*p = %d\t Address of p = %x",*p,p);

     
}