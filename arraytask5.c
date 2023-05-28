//MAX ELEMENT OF AN ARRAY
#include <stdio.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	int max=c[0];
	for(i=0;i<n;i++)
	{
		if(c[i]>max) max=c[i];
	}
	printf("%d",max);
}
