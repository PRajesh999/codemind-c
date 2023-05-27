#include <stdio.h>
int main()
{
	int size,i;
	printf("Enter array size ");
	scanf("%d",&size);
	int a[size];
	printf("Enter array elements ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("index:a[%d]---->value:%d\n",i,a[i]);
	}
	
}
