/*
14. Program to find smallest of N numbers using function.
*/

#include<stdio.h>
 

float read(float [],int);
float smallest(float [],int);

void main()
{
    int i,n;
    float num[30],s;
 
    printf("How many numbers to read ? [MAX = 30] : ");
    scanf("%d",&n);
 
    read(num,n);
 
    s=smallest(num,n);
 
    printf("The smallest among %d numbers is %g",n,s);
 
     
}

float read(float num[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d : ",i+1);
        scanf("%f",&num[i]);
    }
}

float smallest(float num[],int n)
{
    int i;
    float s=num[0];

    for(i=1;i<n;i++)
        if(num[i]<s)
            s=num[i];
    
    return s;
}