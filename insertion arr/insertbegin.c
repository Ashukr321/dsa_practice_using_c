#include<stdio.h>
#define size 10
int idx;

int isEmpty(){
    if(idx== -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    if(idx == size-1){
        return 1;
    }else {
        return 0;
    }
}
void insertatbegin(int arr[],int  data);

int main(){
    idx = -1;
    int arr[size] = {10, 20, 30,40, 50, 60, 70, 80, 90};
    int data = 222;
    //calling insert at begin function
    insertatbegin(arr, data);

    //program to print the array
    for(int i=0; i<10;i++){
        printf("%d\t", arr[i]);
    }
}

//insert at begin function
void insertatbegin(int arr[],int data){
    
    //check for full case
    if(isFull() == 1){
        printf("array is already full\n");
        return;
    }
    
    //checking for empty case
    if(isEmpty() == 1){
        // printf("array is empty\n");
    }

    //noraml case
    for(int i = idx; i>=0; i--){
        arr[i+1]= arr[i];
    }
    
    // inserting data
    idx++;
    arr[0] = data;
    

    return ;
}