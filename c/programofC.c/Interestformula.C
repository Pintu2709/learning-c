#include <stdio.h>
#include <math.h>

int main()
{
    int p, t;
    float r, si, amount, ci;
    printf("Please center principal, time and rate of interest");
    scanf("%d%d%f", &p, &t, &r);
    si = p * t * r / 100;
    // Simple Interest formula is below
    printf("\nSimple interest=%.3f", si);
    // Compound Interest formula is p*t*r
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("\nCompound interest=%.3f", ci);
    return 0;
}