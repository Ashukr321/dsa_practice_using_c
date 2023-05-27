// bubble sort in the c 
#include<stdio.h>


// print array 

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

// buuble sort 
void bubbleSort(int arr[],int n){
    //outer loop for the number of iteration
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-1-i ; j++)
        {
            // compare two adjacent number arr[j] and arr[j+1];
            
            if (arr[j]>arr[j+1])
            {
                // swap the number 
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
}
// main method start here ... 
int main(){
    // create a array 
    int arr[]= {4,2,3,4,56,7,765,43,4,4,6};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
