#include <stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",a+i);    //reading
	}
	for(i=0;i<5;i++)
	{
		printf("%d ", *(a+i));   //accessing
	}
}
