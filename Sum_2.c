#include<stdio.h>
int main()
{
    int i,a,b,x,y,sum=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++)
    {
        if(a<b && i%x==0 && i%y!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}