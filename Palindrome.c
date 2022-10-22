#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int rev=0,r;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}