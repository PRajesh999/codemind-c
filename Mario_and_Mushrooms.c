#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("NORMAL");
    }
    else if((n-1)%3==0)
    {
        printf("HUGE");
    }
    else
    {
        printf("SMALL");
    }
}