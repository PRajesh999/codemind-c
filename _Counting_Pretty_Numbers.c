#include<stdio.h>
int main()
{
    int t,l,r;
    scanf("%d",&t);
     while(t--)
     {
         int n,i,c=0;
         scanf("%d %d",&l,&r);
         for(i=l;i<=r;i++)
         {
             n=i%10;
             if(n==2 || n==3 || n==9)
                 {
                     c++;
                 }
         }
         printf("%d
",c);
     }
}