#include <stdio.h>
int main()
{
    int i,j,n,col;
    scanf("%d",&n);
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    else
    {
        col=1;
        for(i=1;i<n*2;i++)
        {
            for(j=1;j<=col;j++)
            {
                printf("*");
            }
            if(i<n)
            {
                col++;
            }
            else
            {
                col--;
            }
            printf("
");
        }
    }
    return 0;
}