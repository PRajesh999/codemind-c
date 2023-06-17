//WAP HARMONIC SERIES

#include <stdio.h>
int main()
{
	int n,i;
	float sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("1/%d\n",i);
		sum=sum+(float)1/i;
	}
	printf("%f",sum);
}
