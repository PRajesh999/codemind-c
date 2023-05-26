#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter the values of a,b");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("The result of addition is : %d\n",c);
	printf("The result of subraction is : %d\n",d);
	printf("The result of multiplication is : %d\n",e);
	printf("The result of division is : %d\n",f);
	printf("The result of modulus is : %d\n",g);
}
