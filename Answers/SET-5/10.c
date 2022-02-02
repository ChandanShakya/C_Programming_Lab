/*
10. Program to calculate base raised to the power by using function.
*/

#include<stdio.h>
 

float power(float,int);

void main()
{
    float b,result;
    int p;

    printf("Enter the value of base : ");
    scanf("%f",&b);

    printf("Enter the value of power : ");
    scanf("%d",&p);

    result=power(b,p);

    printf("%g^%d = %g",b,p,result);

     
}

float power(float b,int p)
{
    int i;
    float result=1;

    if(p>=0)
    {
        for(i=0;i<p;i++)
            result=result*b;
        
        return result;
    }
    else
    {   
        for(i=0;i>p;i--)
            result=result*b;
        
        return 1/result;
    }
}