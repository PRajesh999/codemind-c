#include<stdio.h>
int main()
{
    int English,Maths,Physics,Chemistry,ComputerScience;
    scanf("%d%d%d%d%d",&English,&Maths,&Physics,&Chemistry,&ComputerScience);
    if(English>35&&Maths>35&&Physics>35&&Chemistry>35&&ComputerScience>35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}