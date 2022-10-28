#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M,c,d;
    scanf("%d%d%d",&x,&y,&M);
    c=pow(x,y);
    d=c%M;
    printf("%d",d);
}