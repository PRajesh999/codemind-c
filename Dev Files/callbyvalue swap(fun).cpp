//call by value
#include <stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b); //function call swap(10,20)
	printf("a=%d b=%d",a,b);
}
void swap(int x,int y) //formal variables
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d y=%d\n",x,y);
}

