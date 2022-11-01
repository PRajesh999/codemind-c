#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	scanf("%f%f%f",&a,&b,&c);
	d=a*0.12;
	e=a+b+c+d;
	printf("%.2f
%.2f",d,e);
}