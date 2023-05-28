//REVERSE THE ELEMEMTS OF ARRAY
#include <stdio.h>
int main()
{
	int n,i,a[n],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
