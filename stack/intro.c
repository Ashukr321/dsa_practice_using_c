//  stack : this is the linear data structure 
// this work on the lifo algorithms 
// last in first out 

// operations on stack are ...

// push ();
// pop ()
// top ()
// peak ();
// size ()
//isUnderFlow();
//isOverFlowo();
// printing the stack elemetns 


// preprocessro 
#include<stdio.h>
#define size 5 

int top ; 
int stack[size];
void push(int data);
void printStack();
//cereat a top pointer  
int top ;
// function declration 
int isUnderflow();
int isOverflow();

//main method start here.. 
int main(){
    top = -1;
    push(3);
    push(30);
    push(32);
    push(3);
    push(3);
    // push(2);
    printStack();
    return  0; 
}


// fucntion initialisation 
int isUnderflow(){
    if (top ==-1)
    {
        return 1; 
    }
    else
    {
        return 0;
    }
    
}

// int isOverflow(){}
int isOverflow(){
    if (top==size-1)
    {
        return 1; 
    }
    else{
        return 0;
    }
    
}

// push element  

void push(int data){
    //check for the overflow 
    if (isOverflow()==1)
    {
        printf("array is already full !😒\n");
        return; 

    }

    // check for the empty case 
    if (isUnderflow()==1)
    {
        stack[0]= data;
    }

    // normal case 
    top++;//increment the top index by 1
    stack[top]=data;

    printf("%d is inserted at index %d\n",data ,top);
    
}


void printStack(){
    for (int i = 0; i < top; i++)
    {
       printf("%d ",stack[i]);
    } 
}
