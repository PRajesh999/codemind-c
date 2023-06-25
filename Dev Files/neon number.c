#include<stdio.h>
int main()
{
    int i,n,c,r,sum=0;
    scanf("%d",&n);
    c=n*n;
    while(c>0)
    {
        r=c%10;
        sum=sum+r;
        c=c/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
