// here we see the about the pop operation in the stack

// preprocessor
#include <stdio.h>
#define size 5

int top;

// crate the stack of size size
int stack[size];

// function declration
int isUnderflow();
int isOverflow();
void push(int data);
int pop();

// printing the stack elemetns
void print();

// main method start here ...
int main()
{
    top = -1;
    push(3);
    push(2);
    push(10);
    int delateData = pop();
    printf("%d  is poped element from stack ",delateData);
    return 0;
}


//isUnderflow();
int isUnderflow(){
    if (top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}



int isOverflow(){
    if (top==size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}


// push 
void  push(int data){
    // check for the isFull 
    if (isOverflow()==1)
    {
        printf("stack is already full ! 😒");
        return;
    }
    
    // check for the empty case 
    if (isUnderflow()==1){
        stack[0]= data;
        
    }

    // normal case 
    top++;
    stack[top]= data;
    printf("%d is inserted  data at index %d \n",data , top); 


}



// pop operation 
int pop(){
    //check for the empty case 
    if (isUnderflow()==1)
    {
        printf("array is empty !😎 \n");
    }

    //store the top  elements in the temp variables 
    int temp = stack[top];
    top--;
    return temp; 
}