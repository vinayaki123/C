#include<stdio.h>
#include<string.h>
int anagram(char s1[],char s2[])
{
	int i,j,count=0;
	if(strlen(s1)==strlen(s2))
	{
		for(i=0;i<strlen(s1);i++)
		{
			for(j=0;j<strlen(s1);j++)
			{
			if(s2[j]==s1[i])
			{
			   s1[i]=0;
			}
		    }
		}
	}

	for(i=0;strlen(s1);i++)
	{
		if(s1[i]!=0)
		  return 0;
	}
		return 1;
	
}
void main()
{
	char s1[20],s2[20];
	printf("Enter 2 strings:");
	scanf("%s%s",&s1,&s2);
	if(anagram(s1,s2))
	{
		printf("2 strigs are anagram");
		
	}
	else
	printf("2 strings are not anagram");
}
