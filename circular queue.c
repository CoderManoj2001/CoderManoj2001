#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
void enqueue();
void dequeue();
void display();
int queue[max];
int front=-1;
int rear=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("\ncircular queue operation    \n");
		printf("1:enqueue operation\n");
		printf("2:dequeue operation\n");
		printf("3:display operation\n");
		printf("4:exit\n");
		printf("enter your option number");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
				case 2:
					dequeue();
					break;
					case 3:
						display();
						break;
							case 4:
								exit(0);
								default:
									printf("please enter valid option\n");
		}
	}
	getch();
	return 0;
}
void enqueue()
{
	int data;
	if(front==-1&&rear==-1)
	{
		printf("enter the data\n");
		scanf("%d",&data);
		front=rear=0;
		queue[rear]=data;
	}
	else if((rear+1)%max==front)
	{
		printf("circular queueu is full\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&data);
		rear=(rear+1)%max;
		queue[rear]=data;
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("circular queue is empty\n");
	}
	else if(rear==front)
	{
		front=rear=-1;
	}
	else
	{
		printf("dequeue element%d",queue[front]);
		front=(front+1)%max;
	}
}
void display()
{
	int i=front;
	if(front==-1&&rear==-1)
	{
		printf("circular queue is empty\n");
	}
	else
	{
		printf("circular queque element are      \n");
		while(i!=rear)
		{
			printf("%d\t",queue[i]);
			i=(i+1)%max;
		}
		printf("%d",queue[rear]);
	}
}
