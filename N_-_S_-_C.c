#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        if(m<n && n-m>=2)
        {
            printf("%d %d %d
",i,i*i,i*i*i);
        }
    }
}