#include <stdio.h>
int main()
{
    int n,i,min=0;
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
        	min=a[i];
		}
    }
    printf("%d",min);
}
