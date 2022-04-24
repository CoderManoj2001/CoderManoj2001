#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
void enqueue();
void dequeue();
void display();
void peek();
int queue[max];
int front=-1;
int rear=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("\n  queue operation \n");
		printf("1: enqueue operation \n");
		printf("2: dequeue operation \n");
		printf("3: display operation \n");
		printf("4: peek operation \n");
		printf("5: exit \n");
		printf("Enter your option number");
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
		 					peak();
		 					break;
		 					case 5:
		 					exit();
		 					break;
		 }
	}
}
void enqueue()
{
	int data;
	if(rear==max-1)
	{
		printf("queue is full\n");
	}
	else
	{
		if(rear==-1)
		{
			front=front+1;
		}
		printf("enter the data\n");
		scanf("%d",&data);
		queue[rear]=data;
	}
}
void dequeue()
{
	if(front==-1 ||front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("dequeue data is %d\n",queue[front]);
		front++;
	}
}
void display()
{
	int i;
	printf("queue elements are       \n");
	for(i=front;i<=rear;i++)
	printf("%d\t",queue[i]);
}
