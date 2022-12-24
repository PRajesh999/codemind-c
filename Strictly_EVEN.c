#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],sum=0,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			if(a[i]%2==0)
			{
			    flag=1;
			}
		}
	}
	if(flag==1)
	{
	    printf("False");
	}
	else
	{
	    printf("True");
	}
}