#include <stdio.h>

int main(void)
{
    int factorial = 1;
    double precision, sum = 1;
    printf("Enter desired precision: ");
    scanf("%lf", &precision);
    int i = 1;
    while( 1.0 / factorial > precision)
    {
        sum += 1.0 / factorial;
        factorial *= ++i;
    }

    printf("e ~ %.15lf\n", sum);

    return 0;
}
