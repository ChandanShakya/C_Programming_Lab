/*
7.  Program to reverse a number using function.
*/

#include<stdio.h>
 

int reverse(int);

void main()
{
    int num,rev;

    printf("Enter the number to reverse : ");
    scanf("%d",&num);

    rev=reverse(num);

    printf("The reverse of %d is %d",num,rev);

     
}

int reverse(int num)
{
    int rev=0;

    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }

  return rev;
}