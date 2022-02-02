/*
3.  Program to demonstrate the use of Static storage class.
*/

#include<stdio.h>
 

void test();

void main()
{
    int i;

    for(i=0;i<=3;i++)
        test();
   
     
}

void test()
{
    static int a=1;

    printf("Hello : %d\n",a);

    a++;
}