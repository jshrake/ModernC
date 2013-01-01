#include <stdio.h>
#include "gcd.h"

int main(void)
{
    int num, denom;
    printf("Enter fraction: ");
    scanf("%d/%d", &num, &denom);
    int div = gcd(num, denom);
    printf("Fraction in lowest terms: %d / %d\n", num / div, denom / div);

    return 0;
}
