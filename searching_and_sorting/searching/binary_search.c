// binary search complete 
#include<stdio.h>

int binarySearch(int arr[],int l,int h , int key){
    if(h>=l)  {
        int mid = (h+l)/2;
        if(arr[mid] == key )
        {
            return mid;
        }
        if (arr[mid]>key)
        {
            return binarySearch(arr,l,mid-1,key);
        }
        else{
            return binarySearch(arr,mid+1,h,key);
        }
    }
    return -1;
    
}
// main method start  here
int main(){
    //create a array 
    int arr[]= {2,5,6,7,4,3,2,44,5,6,};
    int n = sizeof(arr)/sizeof(int);
    int key = 44;
    int result = binarySearch(arr,0,n-1,key);

    printf("pass number is present at index of %d ",result);
    return 0;
}