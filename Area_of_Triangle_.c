#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    float L,S;
    scanf("%d%d%d",&A,&B,&C);
    S=(A+B+C)*0.5;
    L=sqrt(S*(S-A)*(S-B)*(S-C));
    printf("%.2f",L);
}