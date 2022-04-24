#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void peek();
void traversal();
int isfull();
#define N 5
int stack[5];
int top=-1;
int main()
{
	int ch,num;
	while(1)
	{
		printf("press 1 for push\n");
		printf("press 2 for pop\n");
		printf("press 3 for peek\n");
		printf("press 4 for traversal\n");
		printf("press 5 for exit\n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf ("enter a element \n");
			scanf("%d",&num);
			push(num);
			break;
			case 2:
			pop();
			break;
			case 3:
			peek();
			break;
			case 4:
			traversal();
			break;
			case 5:
			exit(0);
			defoult:
			printf("press enter a valid input \n");
		}
	}
	return 0;
}
void push(int element)
{
	if (isfull())
	{
		printf("stack overflow\n");
	}
	else
	{
		top=top+1;
		stack[top]=element;
	}
}
void pop()
{
	if(isempty())
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("poped element is%d\n",stack[top]);
		top=top-1;
	}
}
void peek()
{
	if(isempty())
	{
		printf("stack underflow");
	}
	else
	{
		printf("top element is %d\n",stack[top]);
	}
}
void traversal()
{
	int i;
	if(isempty())
	{
		printf("stack underflow\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d",stack[i]);
	}
	printf("\n");
}
int isfull()
{
	if(top==N-1)
	return 1;
	else
	return 0;
}
int isempty ()
{
	if(top==-1)
	return 1;
	return 0;
}
