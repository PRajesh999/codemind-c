#include <stdio.h>
int fact(int n)
{
	if(n==1) return 1;
	return n*fact(n-1);
}
int main ()
{
	int n;
	scanf("%d",&n);
	int res = fact(n);
	printf("%d",res);
}


/*
Call Stack

fact(1)  1                               Each row is called as a stack frame
fact(2)  2*fact(1)
fact(3)  3*fact(3)
fact(4)  4*fact(3)
fact(5)  5*fact(4)
main()   fact(5)
*/

