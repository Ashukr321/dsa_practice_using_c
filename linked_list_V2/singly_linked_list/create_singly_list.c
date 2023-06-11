#include<stdio.h>
#include<stdlib.h>
// create the struct node 
struct  node
{
    int data; 
    struct node *next;
};

// function for the creating the node of the sinlgy linked list 


struct  node *createNode(int data)
{
    struct node * newNode ;
    newNode= (struct  node *)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
};


// insert at end 
struct node * insertAtEndSll(struct node *head,int data ){
    if (head==NULL)
    {
        head=createNode(data);
        return head;
    }


    
    struct node * temp = head; 
    struct  node *newNode   = createNode(data);

    while (temp->next!=NULL)
    {
        temp= temp->next;
    }

    temp->next=newNode;

    return head;
    
}

// traverse the node 

void printNode(struct node *head)
{
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp= temp->next;
    }
    
};

// update the node 

struct node * updateAtEnd(struct node *head,int data){
    struct node *temp = head;

    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->data=data;
    return head;
    
}

// delate at end of the sinlgy lined list 
struct node *delateAtEnd(struct node * head){

    struct node *temp = head;
   
    
    while (temp->next->next!=NULL)
    {
        temp = temp->next;

    }
    temp->next=NULL;
    return  head;
}

// main method start here .... 

int main(){
    struct node *head ,*n1;
    // dynamic memory allocatoion 

    n1= createNode(23);  
    head = n1;   
    // insert at end in the sinlgy linked list 

    head = insertAtEndSll(head,3);
    head = insertAtEndSll(head,40);
    head = insertAtEndSll(head,50);
    head = insertAtEndSll(head,60);

    // updateat end in the singly linked list 

    head= updateAtEnd(head,1000);
    head= updateAtEnd(head,500);


    // delate at end in the singly linked list 

    head= delateAtEnd(head);
    // head= delateAtEnd(head);
    // head= delateAtEnd(head);
    // head= delateAtEnd(head);
    // traverse the sinlgy linked list linear 

    printNode(head);

    return 0; 
}