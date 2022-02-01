#include<stdio.h>
int main()
{
	if(rename("abc.txt","newfile.text")==0)
	{
		printf("rename successfully");
	}
	else
	{
		printf("rename not successfully");
	}
	return 0;
}   
