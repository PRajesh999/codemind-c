#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int c[n],sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	int a,b;
	scanf("%d %d",&a,&b);
	for(i=0;i<n;i++)
	{
		if(c[i]>=a && c[i]<=b )
		{
		    sum+=c[i];
		}
		
	}
	printf("%d",sum);
	
}
 