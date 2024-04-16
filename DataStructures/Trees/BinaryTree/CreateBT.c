#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
} NodeType;

NodeType* CreateNode(int data)
{
    NodeType* newNode = (NodeType*)malloc(sizeof(NodeType));
    newNode->val = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}

NodeType* InsertLeft(NodeType* root, int value)
{
    root->left = CreateNode(value);
    return root->left;
}

NodeType* InsertRight(NodeType* root, int value)
{
    root->right = CreateNode(value);
    return root->right;
}

void PreOrderTraversal(NodeType* root) 
{
    if(root == NULL)
    {
        return;
    }
    printf("%d->", root->val);
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

int main()
{
    NodeType* root = CreateNode(1);
    InsertLeft(root, 4);
    InsertRight(root, 5);
    InsertLeft(root->left, 6);
    InsertRight(root->right, 7);
    PreOrderTraversal(root);
    printf("NULL\n");
    return 0;
}
