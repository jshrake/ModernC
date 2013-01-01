// Compute the square root of a positive floating-point number using Newton's method
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
  while(true)
  {
    double x, y = 1, old_y = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    // Newton's method for finding square root
    do {
      old_y = y;
      y = (old_y + x / old_y) / 2;
    } while( fabs(y - old_y) > 0.00001 );

    printf("Square root: %f\n", y);
  }

  return 0;
}
