// insertAtEnd();

// preprocessor
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// createNode
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// printNode
void printNode(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf(" %d -> ", temp->data);
        temp = temp->next;
    }
}

// insertAtEnd();
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *temp = head;
    struct Node *newNode = createNode(data);

    if (head == NULL)
    {
        head = createNode(data);
        return head;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// update data from end of the linked list
void updateDataEnd(struct Node *head, int data)
{
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->data = data;
}

//update at Begin 
void updateAtBegin(struct Node *head,int data ){
    head->data = data; 
}
// main methods
int main()
{
    struct Node *head, *n1;
    n1 = createNode(34);
    head = n1;
    head = insertAtEnd(head, 56);
    head = insertAtEnd(head, 6);
    head = insertAtEnd(head, 5);
    updateDataEnd(head, 600);
    updateAtBegin(head,400);
    printNode(head);
    return 0;
}