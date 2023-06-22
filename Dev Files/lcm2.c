#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<101;i++)
    {
        if(n*i%m==0)
        break;
    }
    printf("%d",n*i);
}
