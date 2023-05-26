// insertAtposition in the sinlgy linked  list

// preprocessor⭐⭐

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create node
struct Node
{
    int data;
    struct Node *next;
};

// function
//  function initialisation start here ... 🤷‍♂️🤷‍♂️

struct Node *createNode(int data)
{
    //  create  the struct node temp;
    struct Node *temp;
    // here we must have to allocate the struct temp memory

    temp = (struct Node *)malloc(sizeof(struct Node));
    // malloc fucntion   -> memory allocation in the c
    //  memory is allocate in the heap memory⭐⭐
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// print the node
void printNode(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d  -> ", temp->data);
        temp = temp->next;
    }
}

// insert at begin
struct Node *insertAtBegin(struct Node *head, int data)
{
    struct Node *temp = head;
    if (head == NULL)
    {
        head = createNode(data);
        return head;
    }

    // create a newNode
    struct Node *newNode = createNode(data);
    newNode->next = temp;
    head = newNode;
    return head;
}

// insert at position
struct Node *insertAtPostion(struct Node *head, int pos, int data)
{
    struct Node *temp = head;
    struct Node *newNode = createNode(data);
    int cnt = 0; 

    while (temp->next!= NULL){
        cnt= cnt+1;
        if (cnt==pos-1)
        {
            break;
        }
        temp = temp->next;  
    }

    // create a newNode
    newNode->next= temp->next;
    temp->next= newNode;
    return head;

}
// main method start here ...😎
int main()
{
    // code start here🤷‍♂️⭐
    struct Node *head, *n1;
    n1 = createNode(23);
    head = n1;
    head = insertAtBegin(head, 34);
    head = insertAtBegin(head, 42);
    head = insertAtBegin(head, 42);
    head= insertAtPostion(head,2,400);
    printNode(head);
    return 0;
}