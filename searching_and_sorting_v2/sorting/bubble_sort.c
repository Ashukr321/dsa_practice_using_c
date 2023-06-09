// bubble sort in the c 
#include<stdio.h>


// function declration
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}



// bubble sort 
void bubbleSort(int arr[],int n){
    // this loop for the number of iteration 
    // outer loop 
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
            
        }
        
    }
    
}
// main methods start here ..
int main(){
    //create the array 
    int arr[]= {34,5,6,7,4,3,2,1,0};

    // size of the array 
    int n = sizeof(arr)/sizeof(int);
    printf("before sorting the array \n");
    printArray(arr,n);

    printf("\nafter sorting the array \n");
    // sorting the array 
    // calling the bubble sort function 
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0; 
}