//doubly linked list 
// updation at postion in th doubly linked list 

// preprocessor 
#include<stdio.h>
#include<stdlib.h>

// create the struct node doubly  linked list 
struct Node {
    int data ; 
    struct Node *next;
    struct Node *prev;
};

//createNode 
struct Node *createNode(int data){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev= NULL;
}
//insertNode at postion 
struct Node * insertNodeAtPos(struct Node *head,int data,int pos){
    // create a temp node that point the head node initialy 
    struct Node *temp = head;
    struct Node *newNode = createNode(data);

    int cnt= 0; 
   

    if (pos==1)
    {
        newNode->next=temp;
        temp->prev=newNode;
        head= newNode;
        return head;
    }
    
    if (temp->next==NULL)
    {
        temp->next= newNode;
        newNode->prev=temp;
        return head;
    }
    
    
    while (temp->next!=NULL)
    {
        
        if (cnt==pos-1)
        {
            cnt++;
            break;
        }
         temp=temp->next;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next= newNode;
    return head;
}

//printNode 
void printNode(struct Node *head){
    struct Node *temp = head;
    while (temp!=NULL)  
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }  
}

// main method start here ...
int main(){
    struct Node *head,*n1;
    n1 =createNode(34);
    head= n1;
    head= insertNodeAtPos(head,400,2);
    head= insertNodeAtPos(head,100,1);
    head= insertNodeAtPos(head,100,3);
    head= insertNodeAtPos(head,600,3);
    printNode(head);
    return 0 ; 
}