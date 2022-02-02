/*
28.	Write a program to read line of text and 
	count number of digits, vowels, consonant,
	white spaces and other characters.
*/

#include<stdio.h>
 

void main()
{
	char s[30],c[30];
	int i,digits=0,vowel=0,consonant=0,wspace=0,ochar=0;
	
	printf("Enter a line of string [Max <30] : ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		c[i]=s[i];
		if(s[i]>='0'&&s[i]<='9')
			digits++;
		else if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
		{
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32;
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
				vowel++;
			else
				consonant++;
		}
		else if(s[i]==' '||s[i]=='\t')
			wspace++;
		else
			ochar++;
	}
	
	printf("\nGiven string :\n: %s\n\n",c);
	printf("Digit\n: %d\n",digits);
	printf("Vowel\n: %d\n",vowel);
	printf("Consonant\n: %d\n",consonant);
	printf("White Space\n: %d\n",wspace);
	printf("Other Character\n: %d",ochar);
	
	 
}