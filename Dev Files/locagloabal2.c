#include<stdio.h>
int arr[5];
void read()
{
	int i;
	for(i=0;i<5;i++) scanf("%d",&arr[i]);
}
int main()
{
	int i;
	read();
	for(i=0;i<5;i++) printf("%d ",arr[i]);
	return 0;
}
