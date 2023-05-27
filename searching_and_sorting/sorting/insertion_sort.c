// insertion sort 
#include<stdio.h>


// printArray 
void printArray(int arr[], int n){
   for (int  i = 0; i <n; i++)
   {
        printf("%d ",arr[i]); 
   }
   

}

// insertion sort 
void insertSort(int arr[],int n){
    //outer loop 
    for (int  i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;// this is is index for the  sorted array 
        while (j>=0 && arr[j]> temp)
        {   
            arr[j+1] = arr[j];  
            j--;

        }
        // increment the j by 1 
        // placed the temp at its appropiate place 

        arr[j+1] = temp;
        
    }
    
}
// main methods google ... 
int main(){
    int arr[]= {3,2,0,1,3,4,56,7,8765,45,43,45};
    int n  = sizeof(arr)/sizeof(int);
    //calling the funtion 
    insertSort(arr,n);
    printArray(arr,n);
    return 0; 
}



// time complexity is o(n);

