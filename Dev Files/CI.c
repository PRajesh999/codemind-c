#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,c;
	scanf("%f%f%f",&p,&r,&t);
	c=p*pow((1+(r/100)),t)-p;
	printf("%.2f",c);
	
}
