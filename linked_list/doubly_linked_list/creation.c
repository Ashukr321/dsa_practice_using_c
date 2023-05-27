// here we see the doubly linked list 
//creation 

//preprocessor⭐⭐

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//create node 
struct Node 
{
    int data;
    struct Node *next ;
    struct Node *prev;
};

//function  😎
//1 creation 
struct Node *creatNode(int data){
    // create a newNode 
    struct Node * node ;
    node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data; 
    node->next= NULL;
    node->prev= NULL;
    return node;  
}


// printNode 
void printNode(struct Node *head){
    struct Node *temp= head;

    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp= temp->next;
    }
}
//main method start here ...😎
int main ()
{
    // code start here🤷‍♂️⭐ 
    struct Node *head ,*n1;
    n1= creatNode(23);
    head= n1;
    printNode(head);
    
    return 0;
}