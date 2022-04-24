#include<stdio.h>
#include<stdlib.h>
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter %d number Element:-",i+1);
		scanf("%d",&a[i]);
	}
}
int binary_search(int a[],int key,int n)
{
	int low =0;
	int high=n-1;
	int mid;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(key>a[mid])
		{
			low=mid+1;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if (key==a[mid])
		{
			printf("Element is found ||\n");
			printf("%d is %d number Element ||\n",key,mid+1);
			break;
		}
	}
	if (low>high)
	{
		printf("Element is not present ||");
	}
}
int main()
{
	int mid,high,low,search,n,x;
	printf("Enter the elements Number:- ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements:-\n");
	printarray(a,n);
	while(1)
	{
		printf("Enter the search Element:- ");
		scanf("%d",&search);
		binary_search(a,search,n);
		printf("\npress 1 for search again ||");
		printf("\npress 0 for exit ||\n");
		scanf("%d",&x);
		if(x==0)
		exit(0);
	}
}

