/*
6. Program to demonstrate the use of Chain pointer.
*/

#include<stdio.h>
 

void main()
{
    int x=10;

    int *p;
    int **q;

    p=&x;
    q=&p;

    printf("Value of x = %d\t\tAddress of x = %x\n",x,&x);
    printf("Value of *p = %d\tAddress of p = %x\n",*p,p);
    printf("Value of **q = %d\tAddress of *q = %x",**q,*q);

     
}