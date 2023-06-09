// linear search  

#include<stdio.h>
int linear(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)    
        {
           return i;
        }
        
    }
   
}

int main(){
    //create array 
    int arr[] = {1,2,3,40,5,6};
    //size of array
    int n = sizeof(arr)/sizeof(int);
    int key = 40;
    //linear search
    int index = linear(arr,n,key);
    printf("%d value is found at index of %d ",key,index);
    return 0;
}