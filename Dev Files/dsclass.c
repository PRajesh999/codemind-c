#include <stdio.h>
int linear_search(int *arr,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			return i; 	
		}	
	}
	return -1;
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for ( i=0;i<n;i++)  scanf("%d",&arr[i]);
	int se;
	scanf("%d",&se);
	int res=linear_search(arr,n,se);
	if(res==-1) 
	{
		printf("Element not found");
	}
	else 
	{
		printf("Element found at %d index",res);
	}
}
