#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],sum=0,c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			if(a[i]%2!=0)
			{
			    c++;
			}
	}
	if(c==0)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
}