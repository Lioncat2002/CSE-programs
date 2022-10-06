#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};


int enqueue(struct Node **head,int val){
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=val;
	temp->next=NULL;
	if(*head==NULL){
		*head=temp;
		return 0;
	}
	struct Node *t;
	t=*head;
	while(t->next!=NULL){
		t=t->next;
	}
	t->next=temp;

}

int dequeue(struct Node **head){
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

int main(){
	struct Node *head;
	head=(struct Node*)malloc(sizeof(struct Node));
	head=NULL;
	int choice;
	int val;
	do{
		printf("1. for enqueue\n 2. for dequeue\n 3. for display \n 4. for exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value to insert: ");
				scanf("%d",&val);
				enqueue(&head,val);
				break;
			case 2:
				dequeue(&head);
				break;
			case 3:
				disp(head);
				break;
			case 4:
				break;
			default:
				printf("Invalid choice");
		}
	}while(choice!=4);
}