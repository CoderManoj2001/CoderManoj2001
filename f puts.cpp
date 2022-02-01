#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char ch[20];
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("does not create the file");
	}
	else
	{
		printf("Enter something\n");
		gets(ch);
	 fputs(ch,fp);
		fclose(fp);
		printf("data inserted");
	}
	getch();
	return 0;
 }
