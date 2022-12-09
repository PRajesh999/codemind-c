#include <stdio.h>
int main()
{
    int n,x,a,b;
    scanf("%d",&n);
    x=n/10;
    a=n%10;
    b=a/5;
    if(n%5==0)
    {
        if(a==0)
        {
            printf("%d",x);
        }
        else
        {
            printf("%d",x+b);
        }
    }
    else
    {
        printf("-1");
    }
}