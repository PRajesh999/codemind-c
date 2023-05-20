#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i]!=1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) printf("False");
    else printf("True");
    
}

