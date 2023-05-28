// here we see the insertion sort in the c
#include <stdio.h>


// insertion sort 
void insertionSort(int arr[],int n){
    for (int i = 1; i <n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 &&arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= temp;
        
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
// main method start here
int main()
{
    // create a array
    int arr[] = {4,0, 3, 2, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}