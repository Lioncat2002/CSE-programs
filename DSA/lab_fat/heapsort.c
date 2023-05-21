#include <stdio.h>

int heapify(int arr[200], int n, int i)
{
    int small = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] < arr[small])
        small = left;
    if (right < n && arr[right] < arr[small])
        small = right;
    if (small != i)
    {
        int temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
        heapify(arr, n, small);
    }
}

int heapsort(int arr[200], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main(){
    int arr[200];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    heapsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}