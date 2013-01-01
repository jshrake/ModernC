#include <stdio.h>

int main(void)
{
    int N, factorial = 1;
    double sum = 1;
    printf("Enter desired number of terms: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i)
    {
        factorial *= i;
        sum += 1.0 / factorial;
    }
    printf("e ~ %.15f\n", sum);
    
    return 0;
}
