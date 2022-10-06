#include "stdio.h"
#include "stdlib.h"

struct Student
{
    char name[200];
    char regno[200];
    int age;
    long phno;
};

struct node
{
    struct Student data;
    struct node *next;
};

int checkage_count(struct node **head, int age)
{
    struct node *t;
    int count = 0;
    t = *head;
    while (t != NULL)
    {
        if (t->data.age == age)
        {
            count++;
        }
        t = t->next;
    }
    printf("%d\n", count);
    return count;
}

int insert(struct node **head, struct Student val)
{
    struct node *temp;
    struct node *t;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
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
    if (checkage_count(head, val.age) < 5)
    {
        t->next = temp;
    }
    else
    {
        printf("5 users of same age already exist\n");
    }
}

int delete (struct node **head)
{
    struct node *t, *r;

    if (*head == NULL)
    {
        printf("List is empty");
        return 0;
    }
    t = *head;
    while (t->next != NULL)
    {
        r = t;
        t = t->next;
    }
    r->next = NULL;
    free(t);
}

int display(struct node *head)
{
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
        return 0;
    }
    while (temp != NULL)
    {
        printf("\n---------------------------------\n");
        printf("Name:       %s",temp->data.name);
        printf("Reg. No.:   %s",temp->data.regno);
        printf("Age:        %d\n",temp->data.age);
        printf("Phno:       %ld\n",temp->data.phno);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    struct Student s1;
    int choice;
    do
    {
        printf("1. Insert\n2. Delete\n 3. Display\n 4. Exit\n");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            printf("Enter student name\n");
            fgets(s1.name,200,stdin);
            printf("Enter student regno\n");
            fgets(s1.regno,200,stdin);
            printf("Enter student age\n");
            scanf("%d",&s1.age);
            getchar();
            printf("Enter student phno\n");
            scanf("%ld",&s1.phno);
            getchar();
            insert(&head, s1);
            break;
        case 2:
            delete(&head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (choice != 4);
    return 0;
}