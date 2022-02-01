#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char ch[20];
	int age;
	printf("Enter your name and age\n");
	scanf("%s%d",ch,&age);
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("unable to open the file");
	}
	else
	{
		fprintf(fp,"%s\t%d",ch,age);
		fclose(fp);
		printf("data inserted");
	}
	getch();
	return 0;
}
