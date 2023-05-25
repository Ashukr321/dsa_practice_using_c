// here we see the dequeue operation in the queue
// preprocessor
#include <stdio.h>
#define size 5

int front;
int rear;

// create the queue

int queue[size];
// function declration

int isEmpty();
int isFull();
void enqueue(int data);
// void dequeue();
void printQueue();
void getSize();


// main method start here ...
int main()
{
    front = -1;
    rear = -1;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    // dequeue();
    printQueue();
    getSize();
    return 0;
}

// functtion initialisation
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

// isFull();
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

// enqueue operation
void enqueue(int data)
{
    // check for the full case
    if (isFull() == 1)
    {
        printf("queue is full already \n");
        return;
    }
    else if (isEmpty() == 1)
    {
        front = rear = 0;
        queue[rear]=data;
        printf("%d is inserted at index %d \n", data, rear);
    }else{
        rear++;
        queue[rear] = data;
        printf("%d is inserted at index %d \n", data, rear);

    }
}

// dequeue operation  dequeu is always taken from front 
// void dequeue(){
//     // check for the empty case
//     if (isEmpty()==1)
//     {
//         printf("queue is empty ");
//         return;
//     }
    
//     int temp = queue[front];
//     front++;
//     printf("%d is remove \n ",temp);
    
// }
void printQueue(){
    for (int i = front; i <=rear ; i++)
    {
        printf("%d ",queue[i]);
    }
    
}

void getSize(){
    int s = rear;
    printf("\nsize of queue => %d\ncapacity of queue  is %d",s,size);
    
}