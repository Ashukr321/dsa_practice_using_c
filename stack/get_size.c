//  here we see the how to get size of the stack
#include <stdio.h>
#define size 5

int top;
int stack[size];

// function declration
int isUnderflow();
int isOverflow();
int getSize();
void push(int data);
void peak();


// main method start here ...
int main()
{
    top = -1;
    push(1);
    push(20);
    push(30);
    push(40);
    int  s= getSize();
    printf("\nsize of the stack is =>  %d \ncapacity of stack is => %d \n",s,size);
    peak();

    return 0;
}

// function initialisation start here ...
int isUnderflow()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// isOverflow
int isOverflow()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push methods 
void  push(int data){
    //check for the full case 
    if (isOverflow()==1)
    {
        printf("stack is already full \n");
        return;
    }

    // emtpy case 
    if (isUnderflow()==1)
    {
        stack[top] = data;
    }
    //normal case 
    top++;
    stack[top] = data;
    printf("%d is  push at index %d \n",data,top);

    
}

//get size of the stack 
int getSize(){
    int temp = top ; 
    return temp;
}

// peak 
 void peak(){
    int pek= stack[top];
   printf("\n peak element is => %d\n",pek);
}