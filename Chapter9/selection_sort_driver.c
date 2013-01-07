#include <stdio.h>
#include <stdbool.h>
#include "selection_sort.h"

int main(void)
{
    while(true)
    {
        int N;
        printf("Enter number of ints to sort: ");
        scanf("%d", &N);

        int arr[N];
        printf("Enter integers: ");
        for(int i = 0; i < N; ++i)
        {
            scanf("%d", &arr[i]);
        }

        selection_sort(N, arr);
        printf("Sorted: ");
        for(int i = 0; i < N; ++i)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
