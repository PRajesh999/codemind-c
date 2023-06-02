#include<stdio.h>
int main()
{
    float u,a;
    scanf("%f",&u);
    int x;
    if(u<=199)
    {
        x=u*1.20;
    }
    else if(u>=200&&u<400)
    {
        x=u*1.50;
    }
    else if(u>=400&&u<600)
    {
        x=u*1.80;
    }
    else if(u>=600)
    {
        x=u*2.0;
    }
    if(x>400)
    {
        a=x+x*0.15;
    }
    else
    {
        a=x+100;
    }
    printf("%.2f",a);
}
