//WAP DISTANCE BETWEEN TWO POINTS

#include <stdio.h>
#include <math.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	int a=(x2-x1);
	int b=(y2-y1);
	float d=sqrt((a*a)+(b*b));
	printf("%.2f",d); 
}
