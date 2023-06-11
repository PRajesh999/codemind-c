//array as a function argument
//call by reference
//sending an array to a function be always be call by reference

#include <stdio.h>
int modify(int *a)
{
	a[0] = 147;
}
int main()
{
	int a[5] = {10, 20, 30, 40, 50};	
	printf("Before modification : %d\n" ,a[0]);
	modify(a);
	printf("After modification : %d\n", a[0]);
}
