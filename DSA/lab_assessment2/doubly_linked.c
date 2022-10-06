#include "stdio.h"
#include "stdlib.h"
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

int insert_front(struct node **head, int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    temp->prev = NULL;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
        return 0;
    }
    temp->next = *head;
    (*head)->prev = temp;
    *head = temp;
}

int insert_back(struct node **head, int val)
{
    struct node *temp;
    struct node *t;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->prev = NULL;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
        return 0;
    }

    t = *head;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next=temp;
    temp->prev=t;
    
}

int get_size(struct node *head){
    struct node *t;
    t=head;
    int count=0;
    while(t!=NULL){
        t=t->next;
        count++;
    }
    return count;
}

int insert_idx(struct node **head,int val,int idx){
    struct node *temp;
    struct node *t;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if (get_size(*head) < idx)
    {
        printf("Index out of range\n");
        return 0;
    }
    t=*head;
    for (size_t i = 0; i < idx-1; i++)
    {
        t=t->next;
    }
    temp->next=t->next;
    t->next=temp;
    temp->prev=t;
    
}

int display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int delete_val(struct node **head,int val){
    struct node *t;
    struct node *temp;
    t=*head;
    if((*head)->data==val){
        *head=(*head)->next;
        free(t);
        return 0;
    }
    while(t!=NULL){
        if(t->data==val &&  t->next!=NULL){
            temp=t;
            t->prev->next=t->next;
            t->next->prev=t->prev;
            free(temp);
            return 0;
        }
        else if(t->data==val && t->next==NULL){
            temp=t;
            t->prev->next=NULL;
            free(temp);
            return 0;
        }
        t=t->next;
    }
    printf("Element doesn't exist");
    return 0;
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    int val,idx;

    int choice=0;
    do{
        printf("1. Insert at front\n 2. Insert at back\n 3. Insert at index\n 4. Delete value\n 5. Display\n 6. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {       
        case 1:
            printf("Enter value to insert at front\n");
            scanf("%d",&val);
            insert_front(&head, val);
            break;
        case 2:
            printf("Enter value to insert at back\n");
            scanf("%d",&val);
            insert_back(&head, val);
            break;
        case 3:
            printf("Enter value to insert at index\n");
            scanf("%d",&val);
            printf("Enter index\n");
            scanf("%d",&idx);
            insert_idx(&head,val,idx);
            break;
        case 4:
            printf("Enter value to delete\n");
            scanf("%d",&val);
            delete_val(&head,val);
            break;
        case 5:
            display(head);
            break;
        case 6:
            break;
        default:
            break;
        }
    }while(choice!=6);
}