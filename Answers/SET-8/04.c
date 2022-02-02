/*
1.  Write a program to write numbers in a file "number".
    Then read the file and store the odd numbers in file "odd"
    and even numbers in file "even".
    And display the contents of those files.
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
    FILE *ptr,*podd,*peven;
    char ch;
    int i,n,num,odd=0,even=0;

    ptr=fopen("./Files/number","w+");
    
    if(ptr==NULL)
    {
        printf("File not created !");
    
         
        exit(0);
    }
    
    printf("Writing in file : number \n");
    
    printf("How many number to write ? : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        fprintf(ptr,"%d\n",num);
    }
    printf("Writing complete.");
    podd=fopen("./Files/odd","w+");
    peven=fopen("./Files/even","w+");
    if(podd==NULL||peven==NULL)
    {
        printf("File not created !");
    
         
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        fscanf(ptr,"%d",&num);
        if(num%2==0)
            fprintf(peven,"%d\n",num);
        else
            fprintf(podd,"%d\n",num);
    }
    
    fseek(podd,0,0);
    printf("The odd numbers are :\n");
    while(fscanf(podd,"%d",&num)!=EOF)
    {
        printf("%d\n",num);
    }
    fseek(peven,0,0);
    printf("The even numbers are :\n");
    while(fscanf(peven,"%d",&num)!=EOF)
    {
        printf("%d\n",num);
    }
    fclose(ptr);
    fclose(podd);
    fclose(peven);
     
}