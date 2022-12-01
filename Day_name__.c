#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("monday");
    }
    else if(n==2)
    {
        printf("tuesday");
    }
     else if(n==3)
    {
        printf("wednesday");
    }
     else if(n==4)
    {
        printf("thursday");
    }
     else if(n==5)
    {
        printf("friday");
    }
     else if(n==6)
    {
        printf("saturday");
    }
     else if(n==7)
    {
        printf("sunday");
    }
    else
    {
        printf("invalid input");
    }
}