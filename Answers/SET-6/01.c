/*
1. Program to demonstrate the use of automatic storage class.
*/

#include<stdio.h>
 

void test();

void main()
{
    auto int i;

    for(i=1;i<=3;i++)
        test();

     
}

void test()
{
    auto int a=1;
    
    printf("Hello : %d\n",a);
    
    a++;
}