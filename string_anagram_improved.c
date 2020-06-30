/*1.Enter 1st and 2nd string
  2.declare array of size 26 and initialize it to 0
  3.increament number in array according to s1
  4.decreament the same array values according to s2
  5.if array contain all 0's then string is anagram  */
#include<stdio.h>
#include<string.h>
int anagram(char *s1,char *s2)
{
   int i;
   int arr[26]={0};
  if(strlen(s1)!=strlen(s2))	
  	return 0;
  else
  {
  	for(i=0;s1[i]!='\0';i++)
  	{
  		arr[s1[i]-65]++;
  		arr[s2[i]-65]--;
  		
	}
	
  }
  for(i=0;i<=25;i++)
  {
  	if(arr[0]!=0)
  		return 0;
  		break;
  }
  return 1;
  
}
int main()
{
	char s1[20],s2[20];
	printf("Enter 2 strings");
	scanf("%s%s",&s1,&s2);
	if(anagram(s1,s2))
		printf("Is anagram");
	
	else
		printf("Not anagram");
}
