#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int lomuto_partition(int *arr,int L,int R)
{
	int pivot=arr[R],i=L-1,j;
	for(j=L;j<R;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[R]);
	return i+1;
}
void quick_sort_rec(int *arr,int L,int R)
{
	if(R>L)
	{
		int p=lomuto_partition(arr,L,R);
		quick_sort_rec(arr,L,p-1);
		quick_sort_rec(arr,p+1,R);
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
	quick_sort_rec(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

