#include<stdio.h>
#define MAX_SIZE 5
int top=-1;
int a[MAX_SIZE];
int isempty()
{
	if(top==-1)
        return 1;

	return 0;
}
int isfull()
{
	if(top==MAX_SIZE-1)
	    return 1;	
	return 0;
}
void push(int x)
{
	if(isfull()){
	
		printf("Stack overflow\n");}
	else
		a[++top]=x;
	
}
void pop()
{
	if(isempty())
		printf("Stack underflow\n");
	else
	   printf("Poped element is %d\n",a[top--]);
}
void print()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("Element:%d\n",a[i]);
	}
}
void main()
{
	push(10);
	push(20);
	push(30);
    print();
	pop();
	pop();
	pop();
	pop();
}
