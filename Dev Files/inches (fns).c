#include <stdio.h>
float itc(int);  //declaration
int main()
{
	int i;
	scanf("%d",&i);
    float res=itc(i);  //function call
	printf("%.2f",res);
}
float itc(int x)  //function definition
{
	float z;
	z=2.54*x;
	return z;
}
