#include<stdio.h>
#define size 5
int idx;

void intsertpos(int arr[], int data, int pos);

int main(){
    int arr[size] = {40, 50};
    idx =-1;
    
    //calling insertion at position function
    intsertpos(arr, 80, 2);

    for(int i = 0; i<=size-1;i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}

void intsertpos(int arr[], int data, int pos){
    // check for full case
    if(idx==size -1){
        printf("Array is full\n");
        return;
    }

    for(int i = idx; i>= pos;i--){
        arr[i+1]= arr[i];
    }
    idx++;
    arr[pos-1]= data;
    

    return;
}