#include <stdio.h>
int fun(int n)
{
	if(n==0) return 0;
	return 2+3+fun(n-2);
}
int main ()
{
	int n;
	scanf("%d",&n);
	int res = fun(n);
	printf("%d",res);
}
