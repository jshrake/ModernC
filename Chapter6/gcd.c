// Compute the greatest common divisor of two integers
#include "gcd.h"

int gcd(int a, int b)
{
    int result = a;
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
        result = a;
    }
    return result;
}
