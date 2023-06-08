// here we see the stack in  c
// what is the stack in the js

// stack is the linear data structure
// that store the value in lifo manner
// last in first out fassion
//   some imporatant operation on stack are
// push , pop
// print , get size
// peak

// stuff like that

// preprocessor
#include <stdio.h>
#define size 5

// create the top variables pointer
int top;
// create the  stack of size of the size
int stack[size];

int isUnderflow();
int isOverflow();
void push(int data);
void peak();
void getSize ();
void pop();
// main methods start here ..
int main()
{
    // initalisze  the top pointer variables
    top = -1;
    push(1);
    push(3);
    push(4);
    push(6);
    push(40);
    getSize();
    peak();
    pop();
    return 0;
}


// fucntion initialisation in the c
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

// check for overflow
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

void push(int data)
{
    // check for the overflow
    if (isOverflow() == 1)
    {
        printf("Stack Overflow");
        return;
    }

    // check for the empty case
    if (isUnderflow() == 1)
    {
        stack[top] = data;
    }

    // normal case
    top++;
    stack[top] = data;
    printf("%d data is push at index of %d \n", data, top);
}



//peak
void peak(){
    int peak = stack[top];
    printf("peak element of the stack is %d \n",peak);
}

// get total numeber of the elements 
void getSize (){
    int s = 0; 
    for (int i = 0; i <=top; i++)
    {
        s++;
    }
    printf("size of the stack i %d \n ",s);
    
}



//void pop element 
void pop(){
    int temp = stack[top];
    top--;
    printf("%d data is pop from the  stack \n",temp);
};
