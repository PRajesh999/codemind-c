#include<stdio.h>
#define min(a,b) a < b ? a : b
void merge(int *a,int l,int m,int r)
{
	int i=l,j=m+1,k=0;
	int res[r-l+1];
	while(i<=m && j<=r)
	{
		if(a[i]<=a[j])
		{
			res[k++]=a[i++];
		}
		else 
		{
			res[k++]=a[j++];
		}
	}
	while(i<=m) res[k++]=a[i++];
	while(j<=r) res[k++]=a[j++];
	k=0;
	for(i=l;i<=r;i++)
	a[i]=res[k++];
}
void merge_sort(int *a,int n)
{
	int l,m,r,p,i;
	for(p=1;p<n;p*=2)
	{
		for(i=0;i<n;i+=2*p)
		{
			l=i;
			r=min(l+2*p-1,n-1);
			m=min(l+p-1,n-1);
			merge(a,l,m,r);	
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	merge_sort(a,n);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}
