#include <stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n<=m*k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}