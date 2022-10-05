#include<stdio.h>
int main()
{
    int n,q,r,i,wt=1,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        for(i=1;i<=r;i++)
        {
            wt=wt*i;
        }
        s=s+wt;
        wt=1;
        q=q/10;
        
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}