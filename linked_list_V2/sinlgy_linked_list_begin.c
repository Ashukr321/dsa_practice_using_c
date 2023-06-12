// operation sinlgy liked list  in begin

// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create the struct node
struct node
{
    int data;
    struct node *next;
};

// create a node
struct node *create_node(int data)
{
    // dynamic memory allocation by the malloc function
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// printnode
// void printNode(struct node *head)
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
// }



// recursive ways to print the singly linked list 
void rPrint(struct node *head)
{   
    if (head ==NULL)
    {
        return ;
    }
    printf("%d -> ", head->data);
    rPrint(head->next);
    
};


// insertAtBegin in singly linked list 
struct node * insertAtBegin(struct node * head, int data){
    if (head ==NULL)
    {
        head = create_node(data);
        return head;
    }
    
    struct node * temp = head; 
    //create a node of data 
    struct node * newNode = create_node(data);
    newNode ->next = temp;
    head = newNode;
    return head;
    
}
// update the node at the begin of the sinlgy linked list 
void updateNodeDataAtBegin(struct node *head,int data){
    if (head ==NULL){
        return ;
    }
    
   head->data=  data;

    
}

// delateAtBegin 
struct node * delateAtBegin(struct node *head){
    if (head ==NULL){
        return NULL;
    }

    //create a temp pointer 
    struct node * temp = head;
     head = temp->next; 
     // deallocate the memory temp 
     // calling the free methods 
     
     free(temp);

     return head;
    
}

// main methods
int main()
{
    // create a node
    struct node *head, *n1;
    n1 = create_node(23);
    head = n1;
    head = insertAtBegin(head,4);
    head = insertAtBegin(head,55);
    head = insertAtBegin(head,90);
    updateNodeDataAtBegin(head,34);
    // calling the delate node function 
    head = delateAtBegin(head);
    // head = delateAtBegin(head);
    rPrint(head);
    return 0;
}