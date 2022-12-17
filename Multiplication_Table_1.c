#include <stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        m=n*i;
        printf("%d x %d = %d
",n,i,m);
    }
}