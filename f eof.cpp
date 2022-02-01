#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("unable to open the file");
	}
	else
	{
		while(!feof(fp))
		{
			ch=getc(fp);
			printf("\n data printed successfully");
		}
		getch();
		return 0;
	}
}
