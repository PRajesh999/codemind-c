#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        int rev=0,r;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
}