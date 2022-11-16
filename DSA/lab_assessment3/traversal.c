
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *new (int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
void inorder(struct node *node)
{
    if (node == NULL)
        return;

    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}
void preorder(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);
    preorder(node->left);
    preorder(node->right);
}
void postorder(struct node *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%d ", node->data);
}
int main()
{
    struct node *root = new (1);
    root->left = new (2);
    root->right = new (3);
    root->left->left = new (4);
    root->left->right = new (5);
    printf("\nInorder traversal of binary tree is \n");
    inorder(root);
    printf("\nPreorder traversal of binary tree is \n");
    preorder(root);
    printf("\nPostorder traversal of binary tree is \n");
    postorder(root);
    printf("\n");
}
