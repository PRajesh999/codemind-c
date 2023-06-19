#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("D:\\Files\\hai.txt","w");
	if(fp==NULL)
	{
		printf("!!!!!Error!!!No file in such memory");
	}
	else
	{
		while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
			{
				break;
			}
			printf("%c",ch);
		}
	}
}
