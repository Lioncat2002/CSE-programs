#include "stdio.h"
#include "stdlib.h"

struct node
{
    int data;
    struct node *next;
};

int insert_front(struct node **head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    struct node *t = *head;
    if (*head == NULL)
    {
        *head = temp;
        (*head)->next = *head;
        return 0;
    }
    while (t->next != *head)
    {
        t = t->next;
    }
    t->next = temp;
    *head = temp;
    return 0;
}
int insert_back(struct node **head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    struct node *t = *head;
    if (*head == NULL)
    {
        *head = temp;
        (*head)->next = *head;
        return 0;
    }
    while (t->next != *head)
    {
        t = t->next;
    }
    t->next = temp;
    return 0;
}

int disp(struct node **head)
{
    if (*head == NULL)
    {
        printf("Empty List\n");
        return 0;
    }
    struct node *t;
    t = *head;
    do
    {
        printf("%d ", t->data);
        t = t->next;
    } while (t != *head);
    return 0;
}
int main()
{
    struct node *head;
    head = NULL;
    insert_front(&head, 1);
    insert_front(&head, 2);
    insert_front(&head, 3);
    insert_front(&head, 4);
    insert_back(&head, 5);
    insert_back(&head, 6);
    disp(&head);
}