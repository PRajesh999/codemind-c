#include<stdio.h>
int main()
{
	int x,y,z,w;
	scanf("%d%d%d%d",&w,&x,&y,&z);
	if(w==x||w==y||w==z)
	{
		printf("YES");
	}
	else if(w==(x+y)||w==(y+z)||w==(x+z))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	}
