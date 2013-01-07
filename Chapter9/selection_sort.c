#include "selection_sort.h"

void selection_sort(int arr_length, int arr[arr_length])
{
    if (arr_length == 0)
    {
        return;
    }
    int max_index = 0, max = 0;
    for(int i = 0; i < arr_length; ++i)
    {
         if(arr[i] > max)
         {
            max = arr[i];
            max_index = i;
         }
    }
    swap(arr, max_index, arr_length-1);
    selection_sort(arr_length - 1, arr);
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
