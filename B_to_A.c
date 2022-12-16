#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d%d",&m,&n);
    for(i=n;i>=m;i--)
    {
        if(n>=m)
        {
            printf("%d ",i);
        }
    }
}