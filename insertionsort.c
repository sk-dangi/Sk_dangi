#include <stdio.h>

void insertion_sort(int A[], int n)
{
    int k;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = A[i];

        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int arr[] = {4, 3, 7, 6, 1, 2, 9, 8}, n = 8;
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}