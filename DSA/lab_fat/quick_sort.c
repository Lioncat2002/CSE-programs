#include "stdio.h"

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = t;
    return i + 1;
}

int quick_sort(int *a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

int main()
{
    int a[] = {1, 4, 2, 3, 5};
    quick_sort(a,0,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}