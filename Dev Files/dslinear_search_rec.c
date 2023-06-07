#include<stdio.h>
int linear_search_recursive(int *ar,int n,int i,int se) { // *ar = ar[] Here Pointer is used to catch the value 

	if(i==n) return -1;
	if(ar[i]==se) return i;
    return	linear_search_recursive(ar,n,i+1,se);
}
int main() {
	int n,i;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	int se;
	scanf("%d",&se);
	int res = linear_search_recursive(ar,n,0,se);
	//int res1 = linear_search(ar+2,n,se); ---> Here searching strts from 2nd index
	if(res == -1) {
		printf("Not Found");
	}
	else 
	{
	printf("ELement is found at %d index",res);
    }
}
