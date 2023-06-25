#include<stdio.h>
int prime(int);
int main()
{
	int n,digitcount=0,primecount=0,r;
	scanf("%d",&n);
	if(prime(n))
	{
		while(n>0)
		{
			r=n%10;
			digitcount=digitcount+1;
			if(prime(r))
			{
				primecount=primecount+1;
			}
			n=n/10;
		}
		if(primecount==digitcount)
		{
			printf("megaprime");
		}
		else
		{
			printf("not megaprime");
		}
		}
		else
		{
			printf("not prime");
	    }
}
	int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
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
