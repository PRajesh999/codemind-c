#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1&&n<=1000)
    {
        printf("Positive Number");
    }
    else if (n<=-1&&n>=-1000)
    {
        printf("Negative Number");
    }
}