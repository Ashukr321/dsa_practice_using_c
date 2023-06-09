// here we see the how to delate the element from the queue
#include <stdio.h>
#define size 5

int front, rear;

// create the queue of size of size
int queue[size];

// function declraton

int isFull();
int isEmpty();
void enqueue(int data);
void dequeue();
void printQueue();
void getSize();
// main method start here
int main()
{
    front = -1;
    rear = -1;
    enqueue(23);
    enqueue(2);
    enqueue(3);
    enqueue(5);
    enqueue(6);
    printQueue();
    getSize();

    // dequeue();
    return 0;
}

// function initilisation
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

// isEmpty
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

// enqueue operation
void enqueue(int data)
{
    // check for full case
    if (isFull() == 1)
    {
        printf("queue is already full \n");
        return;
    }

    // check for the empty case
    if (isEmpty() == 1)
    {
        front = rear = 0;
        queue[rear] = data;
        printf("%d data is inserted at index of %d \n", data, rear);
    }
    else
    {
        rear++;
        queue[rear] = data;
        printf("%d data is inserted at index of %d \n", data, rear);
    }
}

// dequeue operation
// dquueu opeartion always take from the front of the queueu
void dequeue()
{
    if (isEmpty() == 1)
    {
        printf("queue is aleady empty \n");
        return;
    }

    int temp = queue[front];
    front++;

    printf("%d data is deleted  \n", temp);
}

void printQueue()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}

void getSize()
{
    int s = rear;
    printf("\nsize of queue is %d \n", s);
}