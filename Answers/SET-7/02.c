/*
2.  Design a structure: Student with members 
    : roll, name, contact, and marks obtained in C and DL.
    Write a program to read the details of students and 
    display it in appropriate format.
*/

#include<stdio.h>
 
struct student
{
    int roll;
    char name[30];
    double contact;
    float mc;
    float mdl;
};

void main()
{
    struct student s1;

    printf("Enter the roll\t\t\t: ");
    scanf("%d",&s1.roll);

    fflush(stdin);

    printf("Enter the name\t\t\t: ");
    gets(s1.name);

    printf("Enter the contact\t\t: ");
    scanf("%lf",&s1.contact);

    printf("Enter the marks obtained in C\t: ");
    scanf("%f",&s1.mc);

    printf("Enter the marks obtained in DL\t: ");
    scanf("%f",&s1.mdl);

    printf("\n\nRoll\tName\t\t\tContact\t\tMarks in C\tMarks in DL\n");

    printf("%d\t%s\t\t%.0f",s1.roll,s1.name,s1.contact);
    printf("\t%g\t\t%g",s1.mc,s1.mdl);

     
}