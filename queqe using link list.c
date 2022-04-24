#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enqueue ();
void dequeue ();
void display ();
struct node
{
	int data;
	struct node*next_node;
};
struct node*head=NULL,*tail=NULL;
int main ()
{
	int ch;\
	while(1)
	{
		printf("press 1 for enqueue\n");
		printf("press 2 for dequeue\n");
		printf("press 3 for display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue ();
				break;
				case 2:
					dequeue ();
					break;
					case 3:
						display ();
						break;
						case 4:
							exit (0);
		}
	}
	getch ();
	return 0;
}
void enqueue ()
{
	struct node*newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data\n");
	scanf("%d",&newnode->data);
	newnode->next_node=NULL;
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->next_node=newnode;
		tail=newnode;
	}
}
void dequeue ()
{
	struct node*temp=NULL;
	if(head==NULL)
	{
		printf("queqe is empty\n");
	}
	else
	{
		temp=head;
		printf("dequeqe item:%d\n",temp->data);
		head=head->next_node;
		temp->next_node=NULL;
		free(temp);
	}
}
void display ()
{
	struct node*temp=head;
	if(head==NULL)
	{
		printf("queqe is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next_node;
		}
	}
}

