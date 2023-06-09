// insertion sort 
#include<stdio.h>

void printArray(int arr[],int  n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        
       while (j>=0&& arr[j]>temp)
       {
            arr[j+1] = arr[j];
            j--;
       }
       arr[j+1] = temp;
    }
    
}
// main methods start here ..
int main(){
    // create the array 
    int arr[]= {4,3,2,2,1,0,9,8};
    int n = sizeof(arr)/sizeof(int);

    printf("before sortin \n");
    printArray(arr,n);
    printf("\nafter sorting \n");
    // calling the insertion sort 
    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}