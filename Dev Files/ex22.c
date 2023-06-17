//WAP TO ACCEPT M INTEGERS P Q R S

#include <stdio.h>
int main()
{
	int p,q,r,s;
	scanf("%d%d%d%d",&p,&q,&r,&s);
	if((r>0) && (s>0) && (p%2==0) && (q>r) && (s>p) && (r+s)>(p+q))
	{
		printf("Correct values");
	}
	else
	{
		printf("Wrong values");
	}
}
