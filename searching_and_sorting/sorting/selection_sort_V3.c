
// preprocessor⭐⭐⭐
#include <stdio.h>

// create swap function 😎😎😎😎
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// selection sort🙂🙂🙂🙂
void selection_sort(int arr[], int n)
{
    int min_index;
    // number of pass or outer loop
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;

        // inner loop
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                swap(&arr[j], &arr[min_index]);
            }
        }
    }
}
// print function😂😂
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
// main method start here😎😎😎
int main()
{
    // create array
    int arr[] = {
        23,
        4,
        5,
        6,
        7,
        5,
        4,
        32,
    };
    // find the size of the array
    int n = sizeof(arr) / sizeof(int);
    printf("before sorting the array \n");
    print(arr,n);
    printf("\nafter selection sorting the array \n");
    selection_sort(arr,n);
    // calling the  print function
    print(arr, n);


    return 0;
}