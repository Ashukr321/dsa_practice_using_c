// linear search 

// preprocessor 
#include<stdio.h>

// create the function that gives the index of the key 
// if the key is present in the  array or not 
int linearSearch(int arr[], int key , int n){
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            return i; 
        }
    }
    return -1;
    
}

// main methods 
int main(){
    //create the array 
    int arr[]= {3,4,5,5,10,6,6}; 
    // n is the size of the array 

    int n = sizeof(arr)/sizeof(int);
    int key = 6;

    //calling the linear search 
    int index = linearSearch(arr,key,n);
    printf("%d index of data is %d \n", index,arr[index]);
    return 0; 
}