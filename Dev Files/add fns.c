#incldue <stdio.h>
void add(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int x,int y)
{
	int z;
	z=x+y;
	printf("%d",z);
}
