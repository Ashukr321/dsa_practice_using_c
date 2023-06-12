// here we see the bubble sort int the c

// lets see the example of the

// preprocessor
#include <stdio.h>

// print the array elements
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// bubble sort the array
void bubbleSort(int arr[], int n)
{
    // outer loop
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        // inner loop
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap the  arr [j] to arr[j+1]
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

// linear search
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
}

// binary search
int binarySearch(int arr[], int l, int r, int key)
{
    if (r > l)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            return binarySearch(arr, l, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, mid + 1, r, key);
        }
    }
    return -1;
}

// main methods start here ..
int main()
{
    // create the array
    int arr[] = {34, 3, 5, 5, 6, 7, 8, 45, 3, 21, 1};
    int n = sizeof(arr) / sizeof(int);

    // get the size of the array
    int key = 21;
    int l = 0;
    int r = n - 1;

    // print the  array
    bubbleSort(arr, n);
    printArray(arr, n);
    printf("\n\n");
    // int index = linearSearch(arr,n , key);
    int index = binarySearch(arr, l, r, key);
    printf("%d ", index);
    return 0;
}

// time complexity = > o(n^2); worst case
// best case time complexity = > o(n);
