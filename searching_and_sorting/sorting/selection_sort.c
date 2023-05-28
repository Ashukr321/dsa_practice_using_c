// selection sort in the c
// this is the most important sorting algo int he c
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// selection sort in the array
void selectionSort(int arr[], int n)
{
    int i, j, min_index;
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }

        swap(&arr[i], &arr[min_index]);
    }
}
// printArrauy
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
// swap

// main methods start here ...
int main()
{
    int arr[] = {4, 3, 32, 5, 5, 6, 7, 8, 8, 9, 77, 5, 5, 44, 4, 3, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}