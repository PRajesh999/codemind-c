#include<stdio.h>
void merge(int *a,int l,int m,int r)
{
	int i=l,j=m+1,k=0,z;
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
	for(z=l;z<=r;z++)
	a[z]=res[z];
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	//int m=(0+(n-1))/2;
	//case 1
	//merge(a,0,5,n-1);
	//for(i=0;i<n;i++) printf("%d ",a[i]);
	//case 2
	merge(a,0,2,n-1);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

//-12 -2 6 14 22 39 4 7 9 19 21 36 42 for the above case 1 m value is 5
//-1 4 9  3 5 7 10 for the case 2 m value is 2


