#include<stdio.h>
int linear_search(int *ar,int n,int se) { // *ar = ar[] Here Pointer is used to catch the value 
	int i;
	for(i=0;i<n;i++) { 
		if(ar[i]==se) 
		{
		return i;
	}
}
    return -1;
}
int main() {
	int n,i;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	int se;
	scanf("%d",&se);
	int res = linear_search(ar,n,se);
	//int res1 = linear_search(ar+2,n,se); ---> Here searching starts from 2nd index
	if(res == -1) {  // res NOT equal to n and NOT +ve.
		printf("Not Found");
	}
	else 
	{
	printf("ELement is found at %d index",res);
    }
}
