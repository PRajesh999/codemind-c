//WAP ARMSTRONG

#include <stdio.h>
int main()
{
	int n,i,r,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+(r*r*r);
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not");
	}
}
