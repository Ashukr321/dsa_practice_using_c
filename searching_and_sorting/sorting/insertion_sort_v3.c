// here we see the insertion sort int he c 

//preprocessor 
#include<stdio.h>


// insertion sort code ....
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

       arr[j+1]=temp;
    }
    
}
//printArray
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
// main methods start here ... 
int main(){
    //create array 
    int arr[]= {3,4,2,2,4,5,8,6,5,4};
    // find the size of the array 
    int n= sizeof(arr)/sizeof(arr[0]);
    //print array 
    printf("before insertion sort\n");
    printArray(arr,n);
    printf("\nafter insertion sort\n");
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}