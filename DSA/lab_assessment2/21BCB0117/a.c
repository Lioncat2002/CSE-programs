#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;

    head=(struct next*)malloc(sizeof(struct node));
    head->data=5;
    head->next=NULL;
    while(head->next!=NULL)
        printf("%d",head->data);
    
    return 0;
}
