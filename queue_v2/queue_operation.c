// here we see the queue operation in the c

// queue is linear data structure that work on the
// fifo first in first out of the algorithms in the c /
// in this we use two keywords variables
// front and rear
// rear ->last of the lements
// dequeue  always perfrom from the rear of the queue
// inerstion of the element always take from the enqueue of the queue

// we can access from both end
//  this is flexible and fast

// start coding

// preprocessor
#include <stdio.h>
#define size 5

int rear;
int front;

// create the queue
int queue[size];

// functio declration
int isEmpty();
int isFull();
void enqueue(int data);
void dequeue();

int main()
{
    // initialise the queue   variables
    front = -1;
    rear = -1;
    enqueue(2);
    enqueue(23);
    enqueue(3);
    return 0;
}

// check for the empty case
int isEmpty()
{
    if (rear == -1 && front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// full case
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
void enqueue(int data)
{
    // check for the full case
    if (isFull() == 1)
    {
        printf("queue is already full ");
        return;
    }
    if (isEmpty() == 1)
    {
        front = rear = 0;
        queue[rear] = data;
        printf("%d data is enque at index %d \n", data, rear);
    }
    else
    {
        // normal case

        rear++; // here increment the rear index by 1

        queue[rear] = data;

        printf("%d data is enque at index %d \n", data, rear);
    }
}
