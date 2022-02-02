/*
11.  Program to read a string and count number of 
    vowels, consonants, digits, special characters and other characters,
    by passing Pointer to Function.
*/

#include<stdio.h>
 
#include<string.h>

void scanline(char *line,int *vc,int *cc,int *dc,int *sc,int *oc);

void main()
{
    char line[80];

    int vc=0,cc=0,dc=0,sc=0,oc=0;

    printf("Enter a line of text \n : ");
    gets(line);

    strlwr(line);

    scanline(line,&vc,&cc,&dc,&sc,&oc);

    printf("\n: Character Sets :\n");
    printf("Vowels\t\t\t: %d\n",vc);
    printf("Consonants\t\t: %d\n",cc);
    printf("Digits\t\t\t: %d\n",dc);
    printf("Special Characters\t: %d\n",sc);
    printf("Other Characters\t: %d\n",oc);

     
}

void scanline(char *line,int *vc,int *cc,int *dc,int *sc,int *oc)
{
    while(*line!='\0')
    {
        if(*line>='a'&&*line<='z')
        {
            if(*line=='a'||*line=='e'||*line=='i'||*line=='o'||*line=='u')
                (*vc)++;
            else
                (*cc)++;
        }
        else if(*line>='0'&&*line<='9')
            (*dc)++;
        else if(*line>32&&*line<127)
            (*sc)++;
        else
            (*oc)++;
        
        *line++;
    }
}