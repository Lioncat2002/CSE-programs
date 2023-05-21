#include "stdio.h"

int selection_sort(int *arr)
{
    for (int i = 0; i < 4; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
        {
            int t = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = t;
        }
    }
}

int main()
{
    int a[] = {1, 5, 2, 7, 6};
    selection_sort(a);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}