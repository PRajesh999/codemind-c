#include<stdio.h>
int main()
{
int s,t,b,c,d;
scanf("%d%d%d",&s,&t,&b);
c=2*s*t*b*512;
d=c/1024;
printf("%dkb",d);
}