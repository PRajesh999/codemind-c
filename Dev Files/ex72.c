#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	int n,i,len;
	printf("Enter the string");
	gets(a);
	len=strlen(a);
	printf("Reverse is");
	for(i=len;i>0;i--)
	{
		printf("%c",a[i]);
	}
}
