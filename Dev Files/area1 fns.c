#include<stdio.h>
void area(int);
int main()
{
	int side;
	scanf("%d",&side);
	area(side);
}

void area(int x)
{
	int a,p;
	a=x*x;
	p=4*x;
	printf("%d %d",a,p);
}
