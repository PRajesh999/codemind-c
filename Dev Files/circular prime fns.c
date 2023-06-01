#include <stdio.h>
int prime(int);
int reverse(int);
int main()
{
	int n,res=0;
	scanf("%d",&n);
	res=reverse(n);
	if(prime(n) && prime(res))
	{
		printf("c prime");
	}
	else
	{
		printf("not c prime");
	}
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int reverse(int x)3
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
