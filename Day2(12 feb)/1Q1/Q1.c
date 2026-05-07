#include <stdio.h>
int main()
{
    int p, t;
    float r, SI;
    printf("Enter the amount, rate, time");
    scanf("%d%f%d", &p, &r, &t);
    SI = (p * r * t) / 100;
    printf("%f", SI);

    return 0;
}