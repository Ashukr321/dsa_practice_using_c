// queue enqueue operation

#include <stdio.h>
#define size 5

int front, rear;

// create the queue
int queue[size];

// function declration
int isEmpty();
int isFull();
void enqueue(int data);

// main method start here
int main()
{
    // initialize the variables front and rear
    front = -1;
    rear = -1;

    enqueue(2);
    enqueue(12);
    return 0;
}

// int  isEmpty();
int isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// isFull
int isFull()
{
    if (rear == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// enqueue
void enqueue(int data)
{
    // check for the full case
    if (isFull() == 1)
    {
        printf("quueue is full \n");
        return;
    }
    // if the queue is empty
    if (isEmpty() == 1)
    {
        front = rear = 0;
        queue[rear] = data;
        printf("%d data is inserted at index %d \n ", data, rear);
    }
    else
    {
        // normal case
        rear++;

        queue[rear] = data;
        printf("%d data is inserted at index %d \n ", data, rear);
    }
}