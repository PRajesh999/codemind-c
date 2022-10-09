#include<stdio.h>
int main()
{
    int min,h,minute;
    scanf("%d",&min);
    h=min/60;
    minute=min%60;
    printf("%d Hour(s) %d Minute(s)",h,minute);
}