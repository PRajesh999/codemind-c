#include <stdio.h>
int main()
{
    int n,i,m,o,y;
    scanf("%d%d%d",&n,&m,&o);
    for(i=m;i<=o;i++)
    {
        y=n*i;
        printf("%d x %d = %d
",n,i,y);
    }
}