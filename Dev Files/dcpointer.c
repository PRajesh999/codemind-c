#include <stdio.h>
int main()
{
	int a=10;
	int b=20;
	int *p1=&a, *p2=&b;
	printf("%d %d %d %d\n", p1, &a, p2, &b);
	printf("%d %d\n", *p1 + *p2, a + b);
	printf("%d %d\n", *(&a) + 1, *(&b) + 1); 
}
