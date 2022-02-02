/*
16. Program to arrange list of numbers in ascending order using function.
    (using bubble sort or selection sort)
*/

#include<stdio.h>
 

void display(int array[10]);
void ascending(int array[10]);

void main()
{
    int array[10]={1,3,2,6,2,1,6,4,4,8};

    printf("The original array is : \n");
 
    display(array);
    ascending(array);
 
    printf("\nThe arranged array is : \n");
    display(array);
 
     
}

void display(int array[10])
{
    int i;

    for(i=0;i<10;i++)
        printf("%d\t",array[i]);
}

void ascending(int array[10])
{
    int i,j,temp;

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}