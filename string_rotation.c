#include<stdio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	char *res=NULL;
	printf("Enter 2 strings");
	scanf("%s%s",&s1,&s2);
	if(strlen(s1)==strlen(s2))
    {
    	strcat(s1,s1);
    	res=strstr(s1,s2);
    	
	}
	if(res)
		printf("YES");
	else
		printf("No");
}
