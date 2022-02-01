#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp;
	char ch[]="pratyush";
	int count =strlen(ch);
	int i;
	printf(" string length=%d\n",count);
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		printf("Doesn`t create the file");
	}
	else
	{
		for(i=0;i<count;i++)
		{
			printf("Writting character is %c\n",ch[i]);
			fputc(ch[i],fp);
		}
		fclose(fp);
		printf("Data inserted");
	}
	getch();
	return 0;
}
