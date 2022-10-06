#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};


int push(struct Node **head,int val){
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=val;
	temp->next=NULL;
	if(*head==NULL){
		*head=temp;
		return 0;
	}
	temp->next=*head;
    *head=temp;
}

int pop(struct Node **head){
	struct Node *t;
	if(*head==NULL){
		printf("List is empty\n");
		return 0;
	}
	t=*head;
	*head=t->next;
	printf("%d\n",t->data);
	free(t);
}

int disp(struct Node *head){
	struct Node *t;
	if(head==NULL){
		printf("List is empty\n");
		return 0;

	}
	t=head;
	while(t!=NULL){
		printf("%d->",t->data);
		t=t->next;
	}
	printf("NULL\n");
}

int reverse_print(struct Node **head){
	struct Node *t;
	t=*head;
	if(t==NULL){
		return 0;
	}
	reverse_print(&t->next);
	printf("%d ",t->data);
}

int main(){
	struct Node *head;
	head=(struct Node*)malloc(sizeof(struct Node));
	head=NULL;
	int choice;
	int val;
	//do{
	//	printf("1. for push\n 2. for pop\n 3. for display \n 4. for exit\n");
	//	scanf("%d",&choice);
	//	switch(choice){
	//		case 1:
	//			printf("Enter value to insert: ");
	//			scanf("%d",&val);
	//			push(&head,val);
	//			break;
	//		case 2:
	//			pop(&head);
	//			break;
	//		case 3:
	//			disp(head);
	//			break;
	//		case 4:
	//			break;
	//		default:
	//			printf("Invalid choice");
	//	}
	//}while(choice!=4);
}