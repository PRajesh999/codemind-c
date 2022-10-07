#include<stdio.h>
int main()
{
 int base1,base2,height;
 float area;
 scanf("%d %d %d",&base1,&base2,&height);
 area=(float)0.5*(base1+base2)*height;
 printf("%.4f",area);
}