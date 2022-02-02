/*
1.  Write a program to write some text in a file myfile.txt 
    until user presses ctrl+z.
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
    FILE *ptr;
    char ch;
    
    ptr=fopen("./Files/myfile.txt","w");
    
    if(ptr==NULL)
    {
        printf("File not created !");
    
         
        exit(0);
    }
    
    printf("Writing in myfile.txt [Press Ctrl + Z to end]\n");
    
    while((ch=getchar())!=EOF)
        fputc(ch,ptr);
    
    printf("Writing complete.");
    
    fclose(ptr);
     
}