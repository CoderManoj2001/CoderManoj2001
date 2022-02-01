#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
	FILE*fp;
	char ch[20];
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("unable to open the file");
	}
	else
	{
		fscanf(fp,"%s",ch);
		printf("%s",ch);
	}
	fclose(fp);
	getch();
	return 0;
}
