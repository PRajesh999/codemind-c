#include <stdio.h>
int reverse(int);
int main()
{
	int n;
	scanf("%d",&n);
	int res=reverse(n);
	printf("%d",res);
}
int reverse(int x)
{
	int rev=0,r;
	while(x!=0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	return rev;
}