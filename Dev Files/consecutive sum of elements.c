#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x,c=0;
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i]+a[i+1])
		{
			c++;
		}
	}
	printf("%d",c);
}
