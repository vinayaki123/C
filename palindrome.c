#include<stdio.h>
int palindrom(char *s)
{
	int i,j=0;
	while(s[j]!='\0')
	{
		j++;
	}
	j--;
	while(i<j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
			
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
void main()
{
	char ch[20]="NEVERODDOREVEN";
	if(palindrom(ch))
	{
	   printf("%s is palindrome",ch);	
	}
	else
	{
		printf("%s is Not palindrom",ch);
	}
	
}
