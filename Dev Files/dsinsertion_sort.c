#include <stdio.h>
int insertion_sort(int *arr, int n)
{
	int key,i,j;
	for(i=1;i<n;i++)
	{	int key=arr[i];
		for(j=i-1;;j--)
		{
			if(arr[j]<key || j==-1)
			{
				arr[j+1]=key;
				break;
			}
			else
			{
				arr[j+1]=arr[j];
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
