//COPY ELEMENTS FROM ONE ARRAY TO ANOTHER
#include <stdio.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",b[j]);
	}
}
// I OR J IS JUST ONLY FOR ITERATION
	
