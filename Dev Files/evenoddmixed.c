#include <stdio.h>
int main()
{
    int a,co=0,ce=0,r;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        a=a/10;
    if(r%2==0)
    {
        co++;
    }
    else
    {
        ce++;
    }
    }
    if(co>0&&ce==0)
    {
        printf("Even");
    }
    else if(ce>0&&co==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
