#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * new(int val){
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = val;
    t->left = NULL;
    t->right = NULL;
}

int inorder(struct node *node){
    if (node ==NULL)
        return 0;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

int main(){
    struct node *root = new (1);
    root->left = new (2);
    root->right = new (3);
    root->left->left = new (4);
    root->left->right = new (5);
    inorder(root);
}