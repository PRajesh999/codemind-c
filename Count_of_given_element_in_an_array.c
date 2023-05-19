#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k,c=0;
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        c++;
	    }
	}
	printf("%d",c);
}