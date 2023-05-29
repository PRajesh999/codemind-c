#include <stdio.h>
int main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("\n%d",&se);
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			flag=1;
			printf("element found at %d\n",mid);
			break;
		}
		else if(a[mid]>se)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(flag==0)
	{
		printf("not found");
	}
	
}
