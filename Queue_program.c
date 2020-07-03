#include<stdio.h>
#define SIZE 5
int q[SIZE];
int front = -1,rear = -1;
int isEmpty()
{
	if(front==-1&&rear==-1)
		return 1;
	else if(front>rear)
	{
		front = -1;
		rear = -1;
		return 1;
	}
	else
		return 0;
}
int isFull()
{
	if(rear==SIZE-1)
		return 1;
	return 0;
}
void enqueue(int x)
{
	if(!isFull())
	{
		if(isEmpty())
		{
			rear++;
			q[++front] = x;
		}
		else
		{
			q[++rear]=x;
		}
	}
	else
		printf("Queue Overflow\n");
}
void dequeue()
{
	if(isEmpty())
		printf("Queue Underflow\n");
	else
	{
		printf("Element Removed = %d\n",q[front++]);
	}
}
void print()
{
	if(isEmpty())
		printf("Queue is empty\n");
	else
	{
		int i;
		for(i=front;i<=rear;i++)
			printf("%d\t",q[i]);
		printf("\n");
	}
}
void main()
{

	
	enqueue(5);
	enqueue(10);
	enqueue(15);
	enqueue(20);
	enqueue(25);
	enqueue(30);
	print();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	
}
