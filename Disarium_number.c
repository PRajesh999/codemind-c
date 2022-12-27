#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n,t1=n;
	int dc=0;
	while(n>0)
	{
		dc++;
		n=n/10;
	}
	int sum=0;
	while (t>0)
	{
		int r=t%10;
		sum+=pow(r,dc);
		dc--;
		t=t/10;
	}
	if(t1==sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}