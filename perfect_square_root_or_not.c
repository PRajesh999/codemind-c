#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float m=sqrt(n);
    if(m==(int)m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}