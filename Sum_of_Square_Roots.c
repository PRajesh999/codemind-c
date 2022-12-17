#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("%.2f",sum);
}