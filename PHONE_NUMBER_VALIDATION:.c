#include <stdio.h>
int main()
{
    long long int m,c=0;
    scanf("%lld",&m);
    while(m>0)
    {
        m=m/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}