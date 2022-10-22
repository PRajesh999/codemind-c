#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    float a,b;
    a=abs((30*h)-(5.5*m));
    b=360-a;
    if(a<b)
    {
        printf("%.1f",a);
    }
    else
    {
        printf("%.1f",b);
    }
    
}