#include <stdio.h>
void fun(int marks)
{
if(marks >=90) printf("A");
else if	(marks >=80 && marks <90) printf("B");
else if	(marks >=70 && marks <80) printf("C");
else if	(marks >=60 && marks <70) printf("D");
else printf("E");
}
int main()
{
int n;
int a=3;
while(a)
{
	scanf("%d",&n);
	fun(n);
	a-=1;
}
}


