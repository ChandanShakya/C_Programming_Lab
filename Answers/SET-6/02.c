/*
2.  Program to demonstrate the use of External storage class.
*/

#include<stdio.h>
 

int a;

void test1();
void test2();

int main()
{
    test1();
    printf("a in test1 = %d\n",a);

    test2();
    printf("a in test2 = %d\n",a);
   
     
    return 0;    
}

void test1()
{
    a=7;
   
    printf("a in test1 = %d\n",a);
   
    a++;
}

void test2()
{
    a=a+2;
 
    printf("a in test2 = %d\n",a);
    a=a+4;
}