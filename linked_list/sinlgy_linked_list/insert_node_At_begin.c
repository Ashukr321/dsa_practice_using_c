//preprocessor⭐⭐

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//create node 
struct Node 
{
    int data;
    struct Node *next ;
};

//function  ... 😎

//create node 
struct Node *creatNode(int data){
    struct Node *temp;
    temp= (struct Node *)malloc(sizeof(struct Node ));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void printNode(struct Node *head ){
    struct Node *temp = head;
    while (temp!=NULL) 
    {
        printf("%d -> ",temp->data);
        temp= temp->next;
    }
    
}
// insertnode at Begin in singly linked list
struct Node *insertAtBegin(struct Node *head ,int data){
    struct Node *temp = head;
    //check for  the empty case 
    if (head==NULL)
    {
        head = creatNode(data);
        return head;
    }
    
    //create a new node 
    struct Node *newNode= creatNode(data);
    // link the new node to the head
    newNode->next= temp;
    head = newNode;
    return head;
} 

// update at begin 

struct Node *updateAtBegin(struct Node *head,int data ){
    struct Node *temp = head;
    temp->data = data ;
    return head;  
}

//main method start here ...😎
int main ()
{
    // code start here🤷‍♂️⭐ 
    struct Node *head ,*n1;
    n1= creatNode(23);
    head= n1;
    head = insertAtBegin(head, 50);
    head = insertAtBegin(head, 35);
    head = insertAtBegin(head, 45);
    head = updateAtBegin(head, 55);
    printNode(head);
    return 0;
}