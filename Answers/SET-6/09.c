/*
9.  Program to demonstrate the use of Pointer and String.
*/

#include<stdio.h>
 

void display(char *city);

void main()
{
    char city[]="Kathmandu";

    display(city);

     
}

void display(char *city)
{
    while (*city!='\0')
    {
        printf("%c",*city);
        city++;
    }
}