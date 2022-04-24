#include<stdio.h>
#include<stdlib.h>
void append();
void append_after_given_pos();
void append_before_given_pos();
void display ();
struct node
{
	struct node*left;
	int data;
	struct node*right;
};
struct node*head=NULL;
int main()
{
	int n;
	while(1)
	{
		printf("\n 1: for create a doubly link list\n");
		printf("2: for create a node after giventh posstion\n ");
		printf("3:for create a node before giventh possition \n");
		printf("4:for display\n ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				{
					append();
					break ;
				}
				case 2:
					{
						append_after_given_pos();
						break;
					}
					case 3:
						{
							append_before_given_pos();
							break;
						}
						case 4:
							{
								display();
								break;
							}
		}
	}
}
void append()
{
	struct node*new_node=NULL;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:-");
	scanf("%d",&new_node ->data);
	new_node->left=new_node->right=NULL;
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		struct node*p=head;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=new_node;
		new_node->left=p;
	}
}
void display()
{
	if (head==NULL)
	{
		printf("doubly link list is empty\n");
	}
	else
	{
		struct node*p=head;
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->right;
		}
	}
}
void append_before_given_pos()
{
	struct node*p=head,* q,* new_node;
	int pos,i=1;
	printf("Enter the possition:-");
	scanf("%d",&pos);
	new_node=(struct node *)malloc(sizeof (struct node));
	printf("Enter the data :-");
	scanf("%d",&new_node ->data);
	new_node ->left=NULL;
	new_node ->right=NULL;
	while(i!=pos-1)
	{
		p=p->right;
		i++;
	}
	q=p->right;
	p->right=new_node;
	new_node ->left=p;
	new_node->right=q;
	q->left=new_node;
}
void append_after_given_pos()
{
	struct node*p=head,*q,*new_node;
	int pos,i=1;
	printf("Enter the possition:- ");
	scanf("%d",&pos);
	new_node=(struct node*)malloc(sizeof (struct node));
	printf("Enter the data;");
	scanf("%d",&new_node->data);
	new_node->left=NULL;
	new_node->right=NULL;
	while(i!=pos)
	{
		p=p->right;
		i++;
	}
	q=p->right;
	p->right=new_node;
	new_node->left=p;
	new_node ->right=q;
	q->left=new_node ;
}
