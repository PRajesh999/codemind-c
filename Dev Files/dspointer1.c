#include <stdio.h>
int main()
{
	int n;
	int *ptr=&n;  //ptr points to n ptr integer pointer
	printf("%d %d",&n,ptr);
}
