// here we see the doubly linked list insertAtbegin

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
    struct node *prev;
};

struct node *createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    return newNode ;
}
// printNode 
void printNode(struct node *head){
    struct node *temp = head ;
    while (temp!=NULL)
    {
        printf(" %d -> ",temp->data);
        temp = temp ->next;
    }
    
}

// insernodeATBegin 
struct node *insertAtBegin(struct node * head,int data){
    struct node *temp = head;
    //check for the empty case 

    if (head==NULL)
    {
        head =createNode(data);
        return head;
    }
    //create a newNode 
    struct node *newNode = createNode(data);
    newNode->next = temp;
    // update the newHead;

    temp->prev = newNode;
    head = newNode;              
    return head;

}

// main method start here 
int main (){
    struct node *head,*n1;
    n1=createNode(34);
    head = n1;
    head= insertAtBegin(head , 50);

    printNode(head);
    return 0;
}