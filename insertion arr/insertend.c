#include<stdio.h>
#define size 5

int idx;

void insertatend(int arr[], int data){

    //check for full case
    if(idx== size-1){
        printf("array is Already full\n");
        return;
    }
    
    //check for empty case
    if(idx == -1){
        arr[idx] = data;
    }

    //normal case
    idx++;
    arr[idx] = data;
    
    
}

//main function
int main(){
    int arr[size];
    idx = -1;

    //calling insert at end function
    insertatend(arr, 25);
    insertatend(arr, 90);
    insertatend(arr, 60);

    //printing the array
    for(int i=0; i<=size -1;i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}