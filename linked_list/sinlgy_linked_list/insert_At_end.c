// insert a node at the end of the linked list
//  this is the sinlgy linked list

// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create a struct node
struct Node
{
    int data;
    struct Node *next;
};

// create node function
struct Node *creatNode(int data)
{
    // create a temp pointer
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// print the node
int printNode(struct Node *head)
{
    int cnt= 0 ;
    struct Node *temp = head;
    while (temp != NULL)
    {
        cnt= cnt+1;
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    return cnt;
}

// insertion opearation is start here...
struct Node *inserAtEnd(struct Node *head, int data)
{
    // create a temp pointer
    struct Node *temp = head;
    // if the linked list is empty
    if (head == NULL)
    {
        head = creatNode(data);
        return head;
    }

    // create newNode of data
    struct Node *newNode = creatNode(data);
    // now linking  the newNode to the temp node that point to the head node

    // traverse the temp node to the end of the node

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}


// updation at end of the linked list 
struct Node *updateAtEnd(struct Node *head , int data){
    struct Node *temp= head; 

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->data= data;
    return head;
}
// main method start here
int main()
{
    struct Node *head, *n1, *n2;
    n1 = creatNode(2);
    head = n1;
    head = inserAtEnd(head, 34);
    head = inserAtEnd(head, 3);
    head = inserAtEnd(head, 4);
    head = inserAtEnd(head, 12);
    head = inserAtEnd(head, 34);
    head= updateAtEnd(head,40);
    // insertion at end of the node
    int size = printNode(head);
    printf("\nthe sizeof the linked list  is %d", size);
    return 0;
}