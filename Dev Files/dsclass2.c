#include <stdio.h>
int linear_search_recursion(int *arr,int n, int i,int se)
{
	if(i==n) return -1;
	if(arr[i]==se) return i;
	return linear_search_recursion(arr,n,i+1,se);
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for ( i=0;i<n;i++)  scanf("%d",&arr[i]);
	int se;
	scanf("%d",&se);
	int res=linear_search_recursion(arr,n,0,se);
	if(res==-1) 
	{
		printf("Element not found");
	}
	else 
	{
		printf("Element found at %d index",res);
	}
}

/*Call Stack
lsr(a,4,2,10)	2
lsr(a,4,1,10)	lsr(a,4,2,10)			30 20 10 40
lsr(a,4,0,10)	lsr(a,4,1,10)			 0  1  2  3
main()			lsr(a,4,0,10)             size=4   se=10
*/
