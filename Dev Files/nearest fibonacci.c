#include<stdio.h>
int main()
{
    int n,i,a,b,c=1;
    scanf("%d",&n);
    a=0,b=1;
    while(c<n) 
    {
    	a=b;
    	b=c;
    	c=a+b;
	}
    printf("%d",c);
}
