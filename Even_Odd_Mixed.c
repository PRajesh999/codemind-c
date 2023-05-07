#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int ce=0,co=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r%2==0) ce++;
        else co++;
    }
    if(ce>0 && co==0) printf("Even");
    else if(co>0 && ce==0) printf("Odd");
    else printf("Mixed");
}