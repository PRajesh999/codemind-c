#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,c,d;
	scanf("%d",&n);
	int a[n],sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum1+=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			sum2+=a[i];
		}
	}
	c=sum1-sum2;
	d=abs(c);
	printf("%d",d);

}