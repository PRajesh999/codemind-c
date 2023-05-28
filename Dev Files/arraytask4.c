//MAXIMUM OF SUM OF ITH ELEMENTS
#include <stdio.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	int max=c[0];
	for(i=1;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	printf("%d",max);
}
	
