//WAP FACTORIAL

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
