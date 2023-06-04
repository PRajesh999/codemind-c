#include <stdio.h>
int binary_search_rec(int *a, int n, int se, int low, int high)
{
	if(low>high) return -1;
	else{
		int mid=(low+high)/2;
		if(a[mid]==se) return mid;
		else if(se > a[mid]) binary_search_rec(a,n,se,mid+1,high);
		else binary_search_rec(a,n,se,low,mid-1);
	}
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
	int res;
	 res=binary_search_rec(a, n, se, 0, n+1);
	if(res==-1) 
	{
		printf("Element not found");
	}
	else 
	{
		printf("Element found at %d index",res);
	}
}

