#include <stdio.h>
#include <stdlib.h>

// create node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// createnode methods
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}



// postorder traversal
struct Node *inOrder(struct Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    inOrder(root->left);
    printf("%d ", root->data);

    inOrder(root->right);
}
// create node
int main()
{
    struct Node *root, *n1, *n2, *n3, *n4, *n5, *n6, *n7;
    n1 = createNode(4);

    root = n1;
    n2 = createNode(3);
    n3 = createNode(20);
    n4 = createNode(1);
    n5 = createNode(5);
    n6 = createNode(4);
    n7 = createNode(2);

    // linking the node
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    printf("inorder  traversal of the tree node \n");
    inOrder(root);
    return 0;

}