#include <stdio.h>
#include <stdlib.h>
struct Node{
    int value;
    struct Node *next;
};

void insert(int x,struct Node **head){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->value=x;
    temp->next=*head;
    *head=temp;
    
}

void print(struct Node **head){
    struct Node *temp=*head;
    printf("List is: ");
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;

    }
    printf("\n");
}

int main(){
    struct Node *head;
    head=NULL;
    int n,x;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&x);
        insert(x,&head);
        
        print(&head);
    }
    
}