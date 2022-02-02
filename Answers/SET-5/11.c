/*
11. Program that uses function isprime() for testing 
    whether a number is prime or not.
*/

#include<stdio.h>
 

int isprime(int);

void main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if(isprime(num)==0)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);

     
}

int isprime(int num)
{
    int i,flag=0;
 
    if(num<2)
        return 1;
    
    for(i=2;i<=(num/2);i++)    
        if(num%i==0)
            flag++;

    if(flag==0)
        return 0;
    else
        return 1;
}