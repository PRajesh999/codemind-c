#include<stdio.h>
int main()
{
    int n,n1,n2,n3,d,fc=0;
    scanf("%d",n);
    n3=d-(n1+n2);
     for(d=1;d<=n;d++)
    {
        if(n%d==0)
        {
            fc++;
        }
    }
        if(fc==2)
        {
            printf("%d",n3);
        }
        
}
