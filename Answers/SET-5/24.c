/*
24. Program to calculate power of base using recursion.
*/

#include<stdio.h>
 

float power(float base,int pow);

void main()
{
    int pow;
    float base,result;

    printf("Enter base : ");
    scanf("%f",&base);

    printf("Enter power : ");
    scanf("%d",&pow);

    result=power(base,pow);

    printf("\n%6g ^ %d = %6g",base,pow,result);

     
}

float power(float base,int pow)
{
    if(pow==0)
        return 1;
    else if(pow>0)
        return power(base,pow-1)*base;
    else
        return power(base,pow+1)/base;
}