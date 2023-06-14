#include<stdio.h>
int selection(int *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int res=selection(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
