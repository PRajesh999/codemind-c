#include <stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],i,j,sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum+=a[i][j];
		}
			printf("%d ",sum);
	}

}
