#include <stdio.h>
int main()
{
    int a,b,c,e;
    scanf("%d%d%d",&a,&b,&c);
    e=a/(b*c);
    if(a%(b*c)==0)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",e+1);
    }
    
}