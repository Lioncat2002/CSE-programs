#include "stdio.h"

int insertion_sort(int *arr)
{

    for (int i = 1; i < 5; i++)
    {
        int m = *(arr + i);
        int c = i - 1;
        while (c >= 0 && m < arr[c])
        {
            *(arr + c + 1) = *(arr + c);
            c--;
        }
        *(arr + c + 1) = m;
    }
}

int main()
{
    int a[] = {1, 4, 2, 3, 5};
    insertion_sort(a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}