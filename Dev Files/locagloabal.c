#include<stdio.h>
int a=10;  //global variable
void fun()
{
	printf("From function fun %d",a);
}
int main()
{
	fun();
	printf("\nFrom main() function %d",a);
	return 0;
}
