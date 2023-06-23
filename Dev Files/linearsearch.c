/*
searching techniques
	1.linear search
	2.binary search      */
	
#include <stdio.h>
int main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("\n%d",&se);
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
}
