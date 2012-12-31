#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2;
    printf("Perform fraction addition: ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);
    printf("Solution: %d / %d\n", num1 * denom2 + num2 * denom1, denom1 * denom2);
    
    return 0;
}
