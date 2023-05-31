// here we see the bubble sort in the c
#include<stdio.h>
void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b= temp;
}
// bubble sort  logic 
void bubble_sort(int arr[],int n){
    // outer loop // or this is number of phase or number of pass 
    for (int i = 0; i < n-1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                // we have to swap the number 
                swap(&arr[j],&arr[j+1]); 
                flag =1;               
            }
        }
        if (flag==0)
        {
            break;
        }  
        
    }    
}
// print array 
void print(int arr[],int n ){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
}
int main(){
    //create a array 
    int arr[]= {3,4,2,3,4,5,6,6,7,7};
    // find the size of the array 
    int n   = sizeof (arr)/sizeof(int);
    // bubble sort
    //print the array 
    bubble_sort(arr,n);
    print(arr,n);
    return 0; 
}

// time coplexity is worst case is o(n^2);
// best case is o(n);
