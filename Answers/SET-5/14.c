/*
14. Program to find largest of N numbers using function.
*/

#include<stdio.h>
 

float read(float [],int);
float largest(float [],int);

void main()
{
    int n;
    float num[30],l;

    printf("How many numbers to read ? [MAX = 30] : ");
    scanf("%d",&n);

    read(num,n);

    l=largest(num,n);

    printf("The largest among %d numbers is %g",n,l);

     
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

float largest(float num[],int n)
{
    int i;
    float l=num[0];
  
    for(i=1;i<n;i++)
        if(num[i]>l)
            l=num[i];
    
    return l;
}