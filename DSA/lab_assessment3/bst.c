#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};
struct node *create_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;
    return p;
}
/// 1. (b)
struct node *insert_node(struct node *root, int x)
{
    if (root == NULL)
    {
        return create_node(x);
    }
    /// Identifying where to add in BST
    else if (x < root->data)
    {
        root->left_child = insert_node(root->left_child, x);
    }
    else
    {
        root->right_child = insert_node(root->right_child, x);
    }
    return root;
}
/// 1. (a)
struct node *create_BST(struct node *root, int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &x);
        root = insert_node(root, x);
    }
    return root;
}
/// 1. (d)
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left_child);
        printf("%d ", root->data);
        inorder(root->right_child);
    }
}
/// 1. (e)
int search_element(struct node *root, int x)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->data == x)
    {
        return 1;
    }
    else if (x < root->data)
    {
        return search_element(root->left_child, x);
    }
    else
    {
        return search_element(root->right_child, x);
    }
}
/// 1. (f)
int display_leaf_nodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->left_child == NULL && root->right_child == NULL)
        printf("%d ", root->data);
    display_leaf_nodes(root->left_child);
    display_leaf_nodes(root->right_child);
}
/// 1. (g)
struct node *min_node(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left_child == NULL)
    {
        return root;
    }
    return min_node(root->left_child);
}
struct node *max_node(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->right_child == NULL)
    {
        return root;
    }
    else
    {
        return max_node(root->right_child);
    }
}
/// 1. (h)
int count1 = 0;
int kth_minimum(struct node *root, int k)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = kth_minimum(root->left_child, k);
    if (left != 0)
    {
        return left;
    }
    count1++;
    if (count1 == k)
    {
        return root->data;
    }
    return kth_minimum(root->right_child, k);
}
int count = 0;
int kth_maximum(struct node *root, int k)
{
    if (root == NULL)
    {
        return 0;
    }
    int right = kth_maximum(root->right_child, k);
    if (right != 0)
    {
        return right;
    }
    count++;
    if (count == k)
    {
        return root->data;
    }
    return kth_maximum(root->left_child, k);
}
/// 1. (c)
struct node *delete_node(struct node *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    /// Identifying where to add in BST
    if (x < root->data)
    {
        root->left_child = delete_node(root->left_child, x);
    }
    else if (x > root->data)
    {
        root->right_child = delete_node(root->right_child, x);
    }
    else
    {
        // Leaf Node:
        if ((root->left_child == NULL) && (root->right_child == NULL))
        {
            free(root);
            return NULL;
        }
        // One Child Node:
        else if ((root->left_child == NULL) || (root->right_child))
        {
            struct node *temp;
            if (root->left_child == NULL)
            {
                temp = root->right_child;
            }
            else
            {
                temp = root->left_child;
            }
            free(root);
            return temp;
        }
        // Two Child node:
        else
        {
            struct node *temp = min_node(root->right_child);
            root->data = temp->data;
            root->right_child = delete_node(root->right_child, temp->data);
        }
    }
    return root;
}
int main()
{
    struct node *root = NULL;
    int n = 1;
    int x;
    int n1;
    int k;


while(n!=0){
        printf("1. Create a new BST with an array\n"
        "2. Insert an element in existing BST\n"
        "3. Delete an Element from the BST\n"
        "4. Sort the elements\n"
        "5. Search for an element in the given BST\n"
        "6. Display Leaf Nodes\n"
        "7. Display minimum and maximum element\n" 
        "8. Display 2nd minimum and maximum element\n"
        "0. To terminate\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Total Number of elements:");
            scanf("%d", &n1);
            root = create_BST(root, n1);
            printf("BST created.\n");
            break;
        }
        case 2:
        {
            printf("Element to be inserted:");
            scanf("%d", &x);
            root = insert_node(root, x);
            printf("Element %d added.\n", x);
            break;
        }
        case 3:
        {
            printf("Element to be deleted:");
            scanf("%d", &x);
            delete_node(root, x);
            printf("Deleted\n");
            break;
        }
        case 4:
        {
            printf("Sorted elements:\n");
            inorder(root);
            printf("\n");
            break;
        }
        case 5:
        {
            printf("Element to be searched:");
            scanf("%d", &x);
            int res = search_element(root, x);
            if (res == 1)
            {
                printf("Element %d Found", x);
            }
            else
            {
                printf("Element does not exist in BST", x);
            }
            printf("\n");
            break;
        }
        case 6:
        {
            printf("The leaf nodes are: ");
            display_leaf_nodes(root);
            printf("\n");
            break;
        }
        case 7:
        {
            printf("The maximum node is: %d\n", max_node(root)->data);
            printf("The minimum node is: %d\n", min_node(root)->data);
            break;
        }
        case 8:
        {
            count = 0;
            count1 = 0;
            printf("Enter the kth index");
            scanf("%d",&k);
            printf("The 2nd minimum node is: %d\n", kth_minimum(root, k));
            printf("The 2nd maximum node is: %d\n", kth_maximum(root, k));
            break;
        }
        }
}
return 0;
}