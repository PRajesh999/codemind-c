//SUM OF SQUARES OF ELEMENTS OF ARRAY
#include <stdio.h>
int main()
{
	int n,i,a[n],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=(a[i]*a[i]);
	}
	printf("%d",sum);
	}
