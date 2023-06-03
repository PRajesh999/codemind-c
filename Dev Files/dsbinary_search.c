#include <stdio.h>
int binary_search(int *a, int n, int se)
{
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			return mid;
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
	return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("\n%d",&se);
	int res=binary_search(a, n, se);
	if(res==-1) 
	{
		printf("Element not found");
	}
	else 
	{
		printf("Element found at %d index",res);
	}
}

