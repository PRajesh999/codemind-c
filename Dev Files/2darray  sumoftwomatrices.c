#include <stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],i,j;
	//reading a matrix
	printf("\n First Matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//reading b matrix
	printf("\n Second Matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j] + b[i][j]);
		}
		
	}
}
