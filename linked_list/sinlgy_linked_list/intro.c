//  singly linked list 


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

//function declration ... 😎

// function initialisation start here ... 🤷‍♂️🤷‍♂️ 
struct Node *createNode(int data){
     //  create  the struct node temp; 
     struct Node *temp;
    //here we must have to allocate the struct temp memory

    temp= (struct Node *)malloc(sizeof(struct Node));
    //malloc fucntion   -> memory allocation in the c
    // memory is allocate in the heap memory⭐⭐ 

    temp->data= data; 
    temp->next= NULL;

    // print message 
    
    return temp;
}


void printNode(struct Node *head){
    //create a temp node 
    struct Node *temp= head;
    while (temp!=NULL)
    {
        printf(" %d ->",temp->data);
        temp= temp->next;
    }
    
}
//main method start here ...😎
int main ()
{

    // code start here🤷‍♂️⭐ 

    struct Node *head ,*n1 , *n2 ;
    n1= createNode(2);
    head= n1;
    n2= createNode(23);


    // linking the node 

    n1->next= n2;




    printNode(head);

    return 0;
}