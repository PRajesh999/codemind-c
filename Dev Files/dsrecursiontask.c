#include <stdio.h>
int sum(int n)
{
	if(n==0) return 0;
	return n%10 + sum(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=sum(n);
	printf("%d",res);
}

/*
Call Stack

sum(0)  	0                               Each row is called as a stack frame
sum(4)   	4+sum(0)
sum(45)   	5+sum(4)
sum(456)  	6+sum(45)
fact(4567)  7+sum(456)
main()      sum(4567)
*/

