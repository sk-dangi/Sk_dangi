#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
            break;
    }
}

int main()
{
    int arr[] = {3, 7, 5, 2, 9, 1, 4, 6, 8}, n = 9;
    bubble_sort(arr, 9);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}