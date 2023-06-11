//call by reference
#include <stdio.h>
void modify(int *a)   //a=10
{
	*a = *a + 1;           
}
int main()
{
	int a=10;
	printf("Before modification : %d\n" ,a);
	modify(&a);
	printf("After modification : %d\n", a);
	
}
