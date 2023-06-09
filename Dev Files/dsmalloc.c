//DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<stdlib.h> //malloc
int main()
{
//	int n=5;
//	int arr[n]; //static memory allocation
//	//you cannot increase the memory allocated
//	int *ptr = (int *)malloc(n*sizeof(int));
	int n=5,i;
	int *arr = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
