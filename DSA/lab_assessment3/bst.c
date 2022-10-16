#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left_child;
    struct node *right_child;
};

struct node * create_node(int x){
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;
    return p;
};

struct node * insert_node(struct node *root, int x){
    if (root == NULL){
        return create_node(x);
    }
    ///Identifying where to add in BST
    else if (x < root->data){
        root->left_child = insert_node(root->left_child,x);
    }
    else{
        root->right_child = insert_node(root->right_child,x);
    }
    return root;
}

int search_element(struct node *root, int x){
    if (root == NULL){
        return 0;
    }
    else if (root->data == x){
        return 1;
    }
    else if (x < root->data){
        return search_element(root->left_child,x);
    }
    else{
        return search_element(root->right_child,x);
    }
}

int display_leaf_nodes(struct node *root){
    if (root == NULL){
        return 0;
    }
    else if (root->left_child == NULL && root->right_child == NULL)
        printf("%d ",root->data);
        display_leaf_nodes(root->left_child);
        display_leaf_nodes(root->right_child);
   
}

int max_node(struct node *root){
    if (root == NULL){
        return 0;
    }
    else if (root->right_child == NULL){
        return root->data;
    }
    else{
        return max_node(root->right_child);
    }
}

int min_node(struct node *root){
    if (root == NULL){
        return 0;
    }
    else if (root->left_child == NULL){
        return root->data;
    }
        return min_node(root->left_child);

}

int kth_minimum(struct node *root, int k){
    static int count = 0;
    if (root == NULL){
        return 0;
    }
    int left = kth_minimum(root->left_child,k);
    if (left != 0){
        return left;
    }
    count++;
    if (count == k){
        return root->data;
    }
    return kth_minimum(root->right_child,k);
}

int kth_maximum(struct node *root, int k){
    static int count = 0;
    if (root == NULL){
        return 0;
    }
    int right = kth_maximum(root->right_child,k);
    if (right != 0){
        return right;
    }
    count++;
    if (count == k){
        return root->data;
    }
    return kth_maximum(root->left_child,k);
}

int main(){
    struct node *root = NULL;
    root = insert_node(root, 10);
    root = insert_node(root, 5);
    root = insert_node(root, 15);
    root = insert_node(root, 3);
    root = insert_node(root, 7);
    
    printf("The leaf nodes are: ");
    display_leaf_nodes(root);
    printf("\n");
    printf("Find element: %d\n",search_element(root, 10));
    printf("The maximum node is: %d\n",max_node(root));
    printf("The minimum node is: %d\n",min_node(root));
    printf("The 2nd minimum node is: %d\n",kth_minimum(root,2));
    printf("The 2nd maximum node is: %d\n",kth_maximum(root,2));

    return 0;
}