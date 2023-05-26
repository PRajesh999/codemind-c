#include <stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int a[n],c1=0,c2=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]<=m) c1+=1;
        else c2+=2;
    }
    printf("%d",c1+c2);
}
