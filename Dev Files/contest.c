#include<stdio.h>
int main()
{
    int x,y,z,w;
    scanf("%d%d%d",&w,&x,&y);
    z=((1*x)+(2*y));
    if(z>=w)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}
