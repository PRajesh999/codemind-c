#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c,x,fib=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==a)
        {
            fib=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(fib==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
