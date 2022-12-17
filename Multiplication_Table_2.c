#include <stdio.h>
int main()
{
    int n,i,m,y;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        y=n*i;
        printf("%d x %d = %d
",n,i,y);
    }
}