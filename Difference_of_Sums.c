#include <stdio.h>
int main()
{
    int n,i,sum=0,prod=0,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(i*i);
    }
    for(i=1;i<=n;i++)
    {
        prod+=i;
    }
    c=prod*prod;
    printf("%d",c-sum);
}
