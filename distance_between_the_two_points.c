#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, x1, x2, y1, y2;
    float distance;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    num1 = x2 - x1;
    num2 = y2 - y1;
    distance = sqrt((num1 * num1) + (num2 * num2));
    printf("%.4f", distance);
}