#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sq = n*n;
	int rev = 0;
	while (n>0)
	{
		int r = n%10;
		rev = rev*10 + r;
		n = n/10;
	}
	int x = rev * rev;
	
	int y = 0;
	while (x > 0)
	{
		int r = x%10;
		y = y * 10 + r;
		x = x/10;
	}
	
	if(y == sq)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}