#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char ch[15];
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("unable to open the file");
	}
	else
	{
		while(!feof(fp))
		{
			fgets(ch,2,fp);
			printf("%s",ch);
			
		}
	}
	fclose(fp);
	getch();
	return 0;
}
