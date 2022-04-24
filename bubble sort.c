#include<stdio.h>
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("yours elements are");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int bubblesort(int a[],int n)
{
	int i,j,temp ,count=0;
	for(i=0;i<n-1;i++)
	{
		count=1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
				count=0;
			}
		}
		if(count==1)
		{
			return;
		}
	}
}
int main()
{
	int n,i;
	printf("enter element number");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	printarray(a,n);
	bubblesort(a,n);
	printf("\nthe shorted elements are");
	for(i=0;i<n;i++);
	{
		printf("%d",a[i]);
	}
}
