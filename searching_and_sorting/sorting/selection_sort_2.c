// selction sort
#include <stdio.h>

// swap
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// selection sort
void selectonSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;// here we can update the min index

        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        // swap(&arr[i], &arr[min_idx]);
        int temp  = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        
    }
}
// print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    // create array
    int arr[] = {4, 5, 65, 3, 3, 2, 2, 4, 5, 6, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    selectonSort(arr, n);
    printArray(arr, n);
    return 0;
}