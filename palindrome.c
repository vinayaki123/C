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
		if(s[i++]!=s[j--])
     	{
			return 0;
	    }
    } 
	return 1;
}
void main()
{
	char ch[20];
	printf("Enter string:");
	scanf("%s",&ch);
	if(palindrom(ch))
	{
	   printf("\n%s is palindrome",ch);	
	}
	else
	{
		printf("%s is Not palindrom",ch);
	}
	
}
