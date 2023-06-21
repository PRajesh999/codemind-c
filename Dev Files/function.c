#include <stdio.h>
int add(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c=add(a,b);
	printf("%d",c);
	
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
