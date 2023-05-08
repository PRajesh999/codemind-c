#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,b,flag=0;
    scanf("%d %d",&c,&b);
    for(i=0;i<n;i++)
    {
        if (a[i]<c || a[i]>b)
        {
            flag=1;
            printf("%d ",a[i]);
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}