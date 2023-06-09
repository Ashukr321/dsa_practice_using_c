// here we see the selection sort in the c
#include <stdio.h>

// print the array
void printArray(int arr[],int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap (int *a ,int *b ){
    int temp = *a ; 
    *a = *b ; 
    *b = temp ;
}
void selectionSort(int arr[],int n){
    // outer loop 

    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j <n; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
        
    }
    
}

// main method  start here ..
int main()
{
    // create the array
    int arr[] = {4,
                 3,
                 4,
                 5,
                 6,
                 7,
                 4,
                 3,
                 1,
                 0};

    int n = sizeof(arr) / sizeof(int);
    // print the array
    printf("before sorting \n");
    printArray(arr, n);
    printf("\nafter sorting \n");
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}