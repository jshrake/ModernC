#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  while(true)
  {
    int counts[10] = {0};
    int digit;
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while(num > 0)
    {
      digit = num % 10;
      ++counts[digit];
      num /= 10;
    }
    for (int i = 0; i < 10; ++i)
    {
      printf("%d: %d\n", i, counts[i]);
    }
  }
}
