#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if((i+1)%2==0)
        {
           sum+=a[i];
        }
    }
    printf("%d",sum);
}