#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float d;
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%f",d);
}
