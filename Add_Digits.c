#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
        if(n%9==0)
        {
            printf("%d",9);
        }
        else
        {
            printf("%d",n%9);
        }
}