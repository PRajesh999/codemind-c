#include <stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    if(a<=10000)
    {
        b=0.8*a;
        c=0.2*a;
    }
    else if(a<=20000)
    {
        b=0.9*a;
        c=0.25*a;
    }
    else if(a>20000)
    {
        b=0.95*a;
        c=0.3*a;
    }
    d=a+b+c;
    printf("%.2f",d);
    
}
